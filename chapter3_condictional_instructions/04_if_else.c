#include<stdio.h>
int main(){
    int num;
    printf("enter your number\n");
    scanf("%d",& num);
    if(num==1){
        printf ("your no. is 1");
    }
    else if(num==2)
    {
        printf ("your no. is 2");
    }
    else if(num==3)
    {
        printf ("your no. is 3");
    }
else {
    printf("we do not have your number");
}
    return 0;
}