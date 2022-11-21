#include <stdio.h>

int main(){
int principal=5,rate=6,years=3;
float simpleinterest =(principal*rate*years);
float calculatedinterest= simpleinterest/100;
printf("value of simple interest is%f",calculatedinterest);
return 0;}