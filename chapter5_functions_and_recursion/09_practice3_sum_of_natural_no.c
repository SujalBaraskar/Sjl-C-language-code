#include<stdio.h>
int sum(int x);
int main(){ 
    int n;
    printf("enter how many numbers sum you want to find");
    scanf("%d",&n);
    printf("the sum of your %d natural numbers is %d",n,sum(n));

return 0;
}
 int sum(int x){
    if(x==0){
        return 0;
    }
    else{ return x+sum(x-1);
    }

}