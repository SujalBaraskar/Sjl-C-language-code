#include<stdio.h>
typedef struct bank{
    char name[10];
    int accountno;
    int opyear;
    float balance;

}info;
void display(info must,int a);
int main(){
    char c[30];
    int a;
    printf("How many customers do you want  to create\n");
    scanf("%d",&a);
    info cust[a];
    for(int i=0;i<a;i++){
        printf("\n");
        printf("Please enter the name of ACCOUNT HOLDER %d\n",i+1);
       scanf("%s",&cust[i].name);
       printf("Please enter your account number\n");
       scanf("%d",&cust[i].accountno);
       printf("Enter the year of account opening\n");
       scanf("%d",&cust[i].opyear);
       printf("Enter the total balance of your account \n");
       scanf("%f",&cust[i].balance);
       printf("\n");
       printf("\n");

    }
    for(int i=0;i<a;i++){
        display(cust[i],i);
        printf("\n");
        printf("****************************************************\n");
        printf("\n");
        }
    
    
return 0;
}
void display(info must,int a){
    
       printf("The name of ACCOUNT HOLDER %d is %s\n",a+1,must.name);
      
       printf(" Your account number %d\n",must.accountno);
       
       printf(" Year of account opening %d\n",must.opyear);
       
       printf(" Total balance of your account is %f\n",must.balance);
       

}