//bubble sort
#include<stdio.h>
int main(){
    int n;
    printf("enter the no of element you want to enter:");
    scanf("%d",&n);
    int i,j,flag=0,temp=0,A[n];
    printf("enter the element :");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1])
            {temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            flag++;
            }
        }

        for(int k=0;k<n;k++){
            printf("%d \t",A[k]);}

        printf("\n");
        
    if(flag==0)
    break;
    }
    
    printf("Sorted array :");
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}