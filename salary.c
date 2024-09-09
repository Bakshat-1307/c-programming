#include <stdio.h>
struct emp
{char name [20];
 int salary;    
};
int main(){
    int i;
    int n;
printf("enter number of employees \n");
scanf("%d",&n);
     struct emp s[n];
     for(i=0;i<n;i++){
        printf("Name: \n");
        scanf("%s",s[i].name);
        printf("Salary: \n");
        scanf("%d",&s[i].salary);
     }
printf("Employee Salary Slip \n \n");
for(i=0;i<n;i++){
     printf("Name: \n");
     printf("%s\n",s[i].name);
     printf("Salary: \n");
     printf("%d\n",s[i].salary);
     }
     return 0;
}