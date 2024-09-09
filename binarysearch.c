#include<stdio.h>
#include<stdio.h>
#include<time.h>
int binarys(int A[],int l,int h,int num)
{
    if(l>h)
        return -1;
    int mid = (l+h)/2;
    printf("%d",mid);
    if(A[mid]==num)
        return mid;
    else if(num<A[mid])
       return binarys(A,l,mid-1,num);
    else 
       return binarys(A,mid+1,h,num);
}
int main()
{
    int n,num;
    clock_t st,endt;
    double cpu_time;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int A[n]; 
    for(int i=0;i<n;i++)
    {
        printf("Enter an element : ");
        scanf("%d",&A[i]);
    }
    printf("Enter an element to be searched in the array :");
    scanf("%d",&num);
    st = clock();
    int s = binarys(A,0,n,num);
    endt = clock();
    if(s==-1)
        printf("Element not found in the array.");
    else
        printf("Element found in the array at %dth index.",s+1);
    cpu_time = ((double)(endt- st)) / CLOCKS_PER_SEC;
    printf("\nTime taken : %lf seconds ",cpu_time);
}