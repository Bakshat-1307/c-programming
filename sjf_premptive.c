#include  <stdio.h>

int main() {
    int n; 
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int process_id[n];    
    int arrival_time[n];
    int burst_time[n];    
    int completion_time[n];
    int waiting_time[n];  
    int total_time = 0;   
    int completed = 0;    
    for (int i = 0; i < n; i++) {
        printf("Enter process ID for P%d: ", i + 1);
        scanf("%d", &process_id[i]);
        printf("Enter arrival time for P%d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Enter burst time for P%d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrival_time[j] > arrival_time[j + 1]) {
                int temp = process_id[j];
                process_id[j] = process_id[j + 1];
                process_id[j + 1] = temp;

                temp = arrival_time[j];
                arrival_time[j] = arrival_time[j + 1];
                arrival_time[j + 1] = temp;

                temp = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp;
            }
        }
    }

    while (completed < n) {
        int shortest = -1; // Index of the process with the shortest burst time It is initialized to -1 to indicate that no process is selected initially.

        for (int i = 0; i < n; i++) 
        {
            if (arrival_time[i] <= total_time && burst_time[i] > 0) 
            {
                if (shortest == -1 || burst_time[i] < burst_time[shortest])
                {
                    shortest = i;
                }
            }
        }

        if (shortest == -1) /If the value of shortest is still -1 after iterating through all processes, it means that there are no processes available to execute at the current time, and the CPU remains idle for one unit of time. In this case, total_time is incremented by 1./
        {
            total_time++;
        } 
        else 
        {
            total_time += burst_time[shortest];
            completion_time[shortest] = total_time;
            waiting_time[shortest] = completion_time[shortest] - arrival_time[shortest] - burst_time[shortest];
            burst_time[shortest] = 0; // Mark the process as completed
            completed++;
        }
    }

    printf("Process ID\tArrival Time\tCompletion Time\tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process_id[i], arrival_time[i], completion_time[i], waiting_time[i]);
    }

    
}