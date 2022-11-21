//condition? expression-if true: expression if false----------------> Format
#include<stdio.h>
void main(){
    int a;
    printf("enter the value of a \n");
    scanf("%d",&a);
    //one liner "if else" sentence
    //this is popularly used when there are less sentences
    (a<5)?printf("a is less than 5"):printf("a is greater than 5");
    return 0;

}