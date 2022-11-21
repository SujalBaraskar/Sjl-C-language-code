//Write a program having a variable i.Print the address of i.Pass this variable to a function and print its address. Are these addresses same? why?
#include<stdio.h>
void vab(int x);
int main(){ 
    int a=5;
    printf("the address of a is %u\n",&a);
    vab(a);

return 0;
}
void vab(int x){
    printf("the address of a is %u\n",&x);
}
/* 
The address will not be same because we are passing copy of a (value of a)and not 
the address of a 
there fore the address will not be same as the copy is saved in another variable x
(if we also use same varible a in function then also result will be same as function 
variable and user function variable are always different even if we use same alphabers)*/