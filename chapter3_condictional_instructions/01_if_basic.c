#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number \n");
    scanf ("%d",&a);

    if (a%2==0){
        printf("%d is a even number",a);

    }
    else {printf("%d is a odd no.",a);
    }
    return 0;
}