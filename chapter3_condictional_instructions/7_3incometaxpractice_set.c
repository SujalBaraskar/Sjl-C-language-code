//calculate income tax paid by an employee to the government as per slabs 2.5-5 laks 5%,5 laks-10laks,20% above 1000000 
#include<stdio.h>
int main(){
    float tax=0,income;
    printf("enter your income\n");
    scanf("%f",&income);

    if (income>=250000 &&income<=500000){
        tax = tax+0.05*(income-250000);
    }
    if (income>500000 &&income<=1000000){
        tax=tax+0.20*(income-500000);
    }
    if (income>1000000 ){
        tax=tax+0.30*(income-1000000);
    }
    printf("your net income tax to be paid till 26th of this month is %f",tax);


    return 0;
}