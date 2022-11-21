//write a function which gives the sum of two vectors as output
#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2);
int main(){
    struct vector v1,v2,v3,sum;
    v1.x =5;
    v1.y=10;
    printf("The dim of x is %d and dim of y is %d\n",v1.x,v1.y); 
    v2.x =8;
    v2.y=20;
    printf("The dim of x is %d and dim of y is %d\n",v2.x,v2.y);
    sum=sumvector( v1, v2); 
    printf("the value of result of sum of two vector for X is %d and for Y is %d",sum.x,sum.y);
return 0;
}
struct vector sumvector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}