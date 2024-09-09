//program for matrix addition
#include<stdio.h>
int main(){
    int a[2][2]={{2,3},{4,5}};
    int b[2][2]={{1,5},{2,8}};
    int c[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\n",c[i][j]);
            if (j == 2-1) {
                printf("\n\n");
                
            }
        }

    }
    return 0;
}