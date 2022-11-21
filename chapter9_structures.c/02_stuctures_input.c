#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;
    printf("enter the code of e1\n",e1);
    scanf("%d",&e1.code);
    printf("enter the salary of e1\n",e1);
    scanf("%f",&e1.salary);
    printf("enter the name of e1\n",e1);
    scanf("%s",e1.name);
    printf("\n");
    printf("enter the code of e1\n",e1);
    scanf("%d",&e1.code);
    printf("enter the salary of e1\n",e1);
    scanf("%f",&e1.salary);
    printf("enter the name of e1\n",e1);
    scanf("%s",e1.name);
    printf("\n");
    printf("enter the code of e1\n",e1);
    scanf("%d",&e1.code);
    printf("enter the salary of e1\n",e1);
    scanf("%f",&e1.salary);
    printf("enter the name of e1\n",e1);
    scanf("%s",e1.name);
    printf("\n");
 return 0;
}