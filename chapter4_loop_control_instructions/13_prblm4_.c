//write a program to give table of any number
#include<stdio.h>
int main(){ 
    int a;
    int i=1;
    printf("which no. table do you want");
    scanf("%d",&a);
    while(i<=10){
        printf("%dx%d= %d\n",a,i,a*i);
        i++;
    }
return 0;
}