//program for searching element in array
#include<stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int element,i;
    printf("enter element to search");
    scanf("%d",&element);
    for(i=0; i<4; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found.", element);
   return 0;
}