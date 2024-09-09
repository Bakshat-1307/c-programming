#include<stdio.h>
int main()
{
    int v[3]={10,100,200};
    int *ptr;
    ptr=v;
    for(int i=0;i<3;i++)
    {
        printf("%p\n",ptr);
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}