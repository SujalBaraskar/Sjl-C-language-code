//Write a program to store a table of 5 in it
#include<stdio.h>
int main(){ 
    int a;
    int table[10];
    printf("Enter the number whose table you wanna print");
    scanf("%d",&a);
    for ( int i=0;i<10;i++){
        table[i]=a*(i+1);
    }
     for ( int i=0;i<10;i++){
         printf("%d x %d= %d\n",a,i+1,table[i]);
         }
     
    return 0;
}