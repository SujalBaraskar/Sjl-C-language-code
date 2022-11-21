#include<stdio.h>
void wrongswap(int x,int y);
void swap(int*x,int*y);
int main(){
    int a=4, b=5;
    printf("the value of a and b before swapping is %d and %d\n",a,b);
    //wrongswap(a,b); it will not swap the values as it is call by values function
    swap(&a,&b); //this is call by reference
    
    printf("the value of a and b before swapping is %d and %d\n",a,b);
    
return 0;
}
void wrongswap(int x,int y){
    int temp;
    x=temp;
    x=y;
    y= temp;
    }
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y= temp;
}//Here the address of variables is passed tothe function as arguments
/* 
now since the addresses are passed to the function the function can now modify the
vlaue of a variable in calling function using * and  & operators.
*/

