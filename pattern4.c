#include<stdio.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++)
        printf("*");
        printf("\n");
    }
    printf("____\n");

    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++)
        printf("%d",i);
        printf("\n");
    }    
    printf("____\n");

    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++)
        printf("%d",j);
        printf("\n");
    }   
    printf("____\n");

    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++)
        printf("%d ",k++);
        printf("\n");
    }   

   
}