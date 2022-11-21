//write a two dimensional vector using structures in C
#include<stdio.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1,v2,v3;
    v1.x =5;
    v1.y=10;
    printf("The dim of x is %d and dim of y is %d\n",v1.x,v1.y); 
    v2.x =8;
    v2.y=20;
    printf("The dim of x is %d and dim of y is %d\n",v2.x,v2.y); 
return 0;
}