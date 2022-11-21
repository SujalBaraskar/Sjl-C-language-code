#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf(" The %d natural no. in reverse order are\n", n);
    for(int i=n; i ; i--){
        printf("%d\n",i);
    }
    return 0;

}

