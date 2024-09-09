//linear search
#include<stdio.h>
int main(){
    int i,n,A[10];
    printf("enter the element :");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);

    printf("enter the element you want to search :");
    scanf("%d",&n);

    int flag=0,pos;
    for(i=0;i<10;i++)
    {
        if(A[i]==n)
        {   pos=i+1;
            flag++;
        }
    }
    if(flag==1)
        printf("element found at :%d",pos);
    else
    printf("element not found");
    
}