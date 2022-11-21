//Write a program to change the value of a variable ro 10x of its current value.Write a function and pass the value by reference
#include<stdio.h>
int tentimes(int*a);
int main(){ 
    int a=6;
    printf("the value of a is %d\n",a);
    tentimes(&a);
    printf("the value of a is %d",a);



return 0;
}
int tentimes(int*a){
    *a=10*(*a);
    return *a;

} // this is call by reference function
