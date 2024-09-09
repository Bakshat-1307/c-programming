#include <stdio.h>

void activity_s(int s[], int f[], int n) {
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(f[j]>f[j+1])
            {
                int t = f[j];
                f[j] = f[j+1];
                f[j+1] = t;

                int p = s[j];
                s[j] = s[j+1];
                s[j+1] = p;
                flag =1;

            }
        }
        if(flag==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",f[i]);
    }
    printf("Selected activities:\n");
    int i = 0;
    printf("Job %d: Start time = %d, Finish time = %d\n", i + 1, s[i], f[i]);


    for (int j = 1; j < n; j++) {
        if (s[j] >= f[i]) {
            printf("Job %d: Start time = %d, Finish time = %d\n", j + 1, s[j], f[j]);
            i = j;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);
    
    int s[n], f[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the starting time for job %d: ", i + 1);
        scanf("%d", &s[i]);
        printf("Enter the finish time for job %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    activity_s(s, f, n);

    return 0;
}