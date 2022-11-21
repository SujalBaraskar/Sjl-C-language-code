#include<stdio.h>
int main(){ 
    int i=1;
    int n;
    printf("enter the no. of integers");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
return 0;
}