#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};
int main(){ 
    struct employee e1;
    struct employee*ptr;//ek aisa variable banaya jo ki struct employee type ke variable ko point kr ske
    ptr=&e1;
    //(*ptr).code=101; or you can also write ptr->code=101;
    ptr->code=101;
    printf("%d",e1.code);
   

return 0;
}