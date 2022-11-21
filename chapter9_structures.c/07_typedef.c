#include<stdio.h>
#include<string.h>
typedef struct employee{//typedef keyword used
int code;
float salary;
char name[10];

} emp;//------> imp line
void show(emp);
int main(){ 
    emp e1,e2,e3;
    e1.code=101;
    e1.salary=10.1;
    strcpy(e1.name,"sujal");
    show(e1);

return 0;
}
void show( struct employee ee1){ //humne jaan bujhkar yeha  struct employee likha hai yeh dikhane ke liye ke emp aur  struct employee ek he hai
     printf("the code of employee is %d\n",ee1.code);
    printf("the salary of employee is %f\n",ee1.salary);
    printf("the name of employee is %s\n",ee1.name);

}
/*
humne kya kiya n humne bana diya  struct employee ka ek shortcut name jo ki hai 'emp'
aan humare upr hai hume kya likhna hai  struct employee ya phir emp kyuki dono ek 
he kaam krte hai
Therefore,
we can use the typedef keyword to create an alias name (that is nickname)
for data types we are creating in C (like we created  struct employee)
typedef is most commonly used with structures
*/