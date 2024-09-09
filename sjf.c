#include<stdio.h>
int main(){
    int n;
    printf("enter the no of process :");
    scanf("%d",&n);
    int i,j,bt[n];
    printf("Enter the bust time :");
    for(i=0;i<n;i++)
    scanf("%d",&bt[i]);
    printf("Burst time is :");
    for(i=0;i<n;i++)
    printf("%d ",bt[i]);
     for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            int temp;
            if (bt[j] > bt[j + 1])
            {
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
            }
        }
    }
    printf("\n sorted Burst time is :");
    for(i=0;i<n;i++)
    printf("%d ",bt[i]);
    int wt[n];
    for(i=1;i<n;i++)
    {
        wt[0]=0;
        wt[i]=bt[i-1]+wt[i-1];
    }
    
    for(i=0;i<n;i++)
    printf("\n the waiting time is :%d ",wt[i]);
    float sum=0;
    for(i=0;i<n;i++)
    sum=sum+wt[i];
    printf("\nthe average time is :%f",sum/n);

}