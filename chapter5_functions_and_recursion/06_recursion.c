/* 
Recursion
A function defined in C can call itself .This is  called recursion 
A function calling itself is  also called 'recursive' function
*/


/* example
 a very good example is factorial
  factorial (n) = 1x2x3x.....xn
  factorial (n) = 1x2x3x....n-1 x n
  factorial (n) = factorial(n-1)x n

Since we can write factorial of a number in terms of itself , we can program it using recursion
*/
#include<stdio.h>
int factorial(int x);
int main(){
    int b,c;
    printf("enter the number whoes value you have to find");
    scanf("%d",&b);
    factorial(b);
    printf("the value is %d",factorial(b));
    return 0;
}
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{ return x*factorial(x-1);
        
    }
}
/*imp notes
1. Recursion is sometimesthe most direct way to code an algorithm
2. The condition which doesnt call the function any further in a recursive function
   is called as the base condition
3. sometimes due to a mistake made by the programmer a recursive  function can keep
   running without returning resulting in a memory error
*/