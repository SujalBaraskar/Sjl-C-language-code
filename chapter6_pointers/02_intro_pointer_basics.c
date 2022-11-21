#include<stdio.h>
int main(){
    int i=99;
    int*j= &i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",j);
    
    printf("the address of j is %u\n",&j);
    printf("the value of j is %u\n",*(&j));//------> this says value at(*) address of(&) j is    
    return 0;
}
//Pointer to pointer (making pointer of pointer)
/* 
Just like j is pointing to i or storing the address of i , we can have another variable
k which can further store the address of j. What will be the type of k??
it will be: int**K
k = &j

Aise he hum k ka bhi pointer bna skte hai aur uska form hoga
int***l ---->where l is a variable
and we can continue so on creating pointers by adding more stars
*/