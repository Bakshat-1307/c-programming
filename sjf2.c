#include <stdio.h> 

int main() {
    int n, bt[20], i, j;
    printf("Enter total number of processes :");
    scanf("%d", &n); 
    printf("Enter Process Burst Time:\n");
    for (i = 0; i < n; i++) {
        printf("P[%d]:", i + 1);
        scanf("%d", &bt[i]);
    }
    for (i = 0; i < n - 1; i++) {
        int min_index = i;

        for (j = i + 1; j < n; j++) {
            if (bt[j] < bt[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = bt[i];
            bt[i] = bt[min_index];
            bt[min_index] = temp;
        }
    }

    printf("Process\t\tBurst Time\n"); 
    for (i = 0; i < n; i++) {  
        printf("P[%d]\t\t%d\n", i + 1, bt[i]);
    }
    int wt[20];
    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    printf("Process\t\tBurst Time\t\tWaiting Time\n");
    for (i = 0; i < n; i++) {  
        printf("P[%d]\t\t%d\t\t%d\n", i + 1, bt[i], wt[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+wt[i];
    }
    printf("Total waiting time: %f\n",sum);
    float average=sum/n;
    printf("Average waiting time: %f\n",average);
return 0;
}