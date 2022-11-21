#include<stdio.h>
//sum is a function which takes a and b as input and returns as an output
int sum(int a , int b);
int main(){ 
    int c;
    c= sum(2,4); //aan kyuki sum ko call krne ke baad woh hume ek value de rha hai to isiliye use  ek variable se define kiya hai humne
printf("sum of a and b is %d",c);
return 0;
}
int sum(int a, int b){
     int result;
     result= a+b;
     return result;
}
/*
int sum(int a , int b); here a and b are parameters
 a and b ie; parameters are just place holders 
 "int" matlab hai hum koi integer value return kr rahe hai

sum(2,4); here 2 and 4 are arguments 
arguments are real values

*/