//Try problem 3 using call by value and verify that it doesn't change the the value of the said variable

#include<stdio.h>
int tentimes(int a);
int main(){ 
    int a=6;
    printf("the value of a is %d\n",a);
    tentimes(a);
    printf("the value of a is %d",a);



return 0;
}
int tentimes(int a){ 
    a=10*( a);
    return a;} // this is call value function as it only passes values and cannot change the values

