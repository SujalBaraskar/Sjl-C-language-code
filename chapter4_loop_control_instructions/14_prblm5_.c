//write a program to give factorial of any number
#include<stdio.h>
int main(){ 
    int a,i ;
    int fact=1;
    printf("please provide with the number , you want to find the factorial of");
    scanf("%d",&a);
    for (i=1;i<=a;i++){ /* for {
                       fact=fact*i;  is code ko aise bhi likha ja sakta hai*/
    fact*=i;
    }
    printf("factorial of %d is %d",a ,fact);

return 0;
}