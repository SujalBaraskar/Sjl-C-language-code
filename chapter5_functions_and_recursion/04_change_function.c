#include<stdio.h>
int change(int a);
int main(){ 
    int b=35;
    printf("the value of b before change function is %d\n", b);
    change(b);
    printf("the value of b after change function is %d\n", b);
    
return 0;
}
int change(int a){
    a=39;
    return a;
}
// the value of b is not changing because a copy of b is passed to change function
//so the real value remains unchanged