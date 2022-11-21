#include<stdio.h>
struct show{
    int code;
    float salary;
};
int main(){ 
    struct show v1;
    struct show*ptr;
    ptr=&v1;
    (*ptr).code=56;
    (*ptr).salary=32.5;
    printf("the salary is %d and code is %0.2f\n",(*ptr).code,(*ptr).salary);
    //as ptr->code means (*ptr).code (that is value at ptr.code)
    ptr->code=56;
    ptr->salary=32.5;
    printf("the salary is %d and code is %0.2f",ptr->code,ptr->salary);
    //as ptr->code means (*ptr).code (that is value at ptr.code)

return 0;
}