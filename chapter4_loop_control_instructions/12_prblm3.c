//write a program to give sum of first n natural numbers
#include<stdio.h>
int main(){ 
    int i, sum=0;
    int s ;
    printf ("enter how many natural no. sum you want to perform");
    scanf("%d",&s);

    for (i=0;i<=s;i++){
        sum+=i;
        }
        printf("the value of sum of %d natural no. is %d",s,sum);

return 0;
}