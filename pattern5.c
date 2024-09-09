#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i-1;k--)
        printf(" ");
        
        for(j=1;j<i+1;j++)
        printf("*");
       
       for(j=2;j<i+1;j++)
       printf("*");
         
        printf("\n");
    }
   printf("_________\n");
   
    
};