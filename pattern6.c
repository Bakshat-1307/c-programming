#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        printf("%d ",i);
        printf("\n");
    }
    printf("_______\n");
    
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        printf("%d ",j);
        printf("\n");
    }
    printf("_______\n");

    int k=0;
     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        printf("%d\t",k++);
        printf("\n");
    }
    printf("_______\n");

     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        printf("%c ",i+64);
        printf("\n");}
}