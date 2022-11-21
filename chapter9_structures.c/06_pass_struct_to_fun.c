#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show (struct employee e1);
int main(){ 
    struct employee e1;
    e1.code=101;
    e1.salary=10.1;
    strcpy(e1.name,"sujal");
    show(e1);


    
return 0;
}
void show (struct employee ee1){//hume stuct employee he likhna pdega n kyuki humne banaya he hai ek struct employee naam ka function banaya hai na 
    printf("the code of employee is %d\n",ee1.code);
    printf("the salary of employee is %f\n",ee1.salary);
    printf("the name of employee is %s\n",ee1.name);
}
/* 
aab jaise humne ek function likha hai show (int a) and we are passing b to it where b=8
to hum bus variable ka naam change krte haina function me naa ki uska type 
aab hum function , woh agr int hai to use int type ka he variable passs krege
to jb humne khud ka he ek alg type banaya hai jiska naam hai "struct employee"
to hume struct employee he likhna pdega na function me kyuki hum use ek struct 
employee type ka he variable he pass krege na jo is case me hai e1 aur use store 
krege ee1 ke naam se 
*/