//write a program to print table of 10 in reverse order
#include<stdio.h>
int main(){
    printf("the multiplication of 10 in reverse order is \n");
    for(int i=10 ; i ; i--){
        printf("10 x %d=%d\n",i,i*10);

    }
    return 0;

} //i ki value zero ho hayegi to condition automatically false ho jayegi