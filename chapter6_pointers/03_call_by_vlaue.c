/* There are two types of  values
  1. call by value -------> sending the values of arguments 
  2. call by reference ------- sending the address of arguments
  */

#include<stdio.h>
int sum(int a, int b);
int main(){ 
    int x =5, y=6;
    printf("the value of 5+6 is %d",sum(x,y));

return 0;
}
int sum(int a, int b){
    int c;
    c= a+b;
    a=569;
    b=562;

    return c;
}
//if sum is defined as sum(int a, int b), the values 3and4 are copied to a and b . 
// Now even if we change a and b in function , nothing happens to the variables xand y
//This is call by value