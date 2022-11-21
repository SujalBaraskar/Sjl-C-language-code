//Write a program to print the address of a variable . Use this address to get the value of this variable
#include<stdio.h>
int main(){ 
    int a=4;
    int*j=&a;
    printf("the address of a is %u\n",j);
    printf("the value of a is %d\n",*j);
    
return 0;
}