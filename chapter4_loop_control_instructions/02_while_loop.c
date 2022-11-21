// while loop: while(condition){code}
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
    while(a<1000){
        printf("%d\n",a);
        a++;
    }
    return 0;
}