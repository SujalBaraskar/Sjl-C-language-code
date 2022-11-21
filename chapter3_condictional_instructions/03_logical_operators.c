//&&(and), || (or), ! are logical operators in c . these are read as "and","or", "not".they are used to provide logic to our programs
// '1' is evaluated as true
//'0' is evaluated as false
#include<stdio.h>
int main(){
    int age ,vippass;
    printf ("enter your age \n");
    scanf("%d",&age);
    printf("do you have vippass, if yes then type 1 ,if no then type 0\n");
    scanf("%d",&vippass);

    if(age<70 && age>=18|| vippass==1){
        printf("your  allowed to drive\n");
    }
    else{printf("your not are allowed to drive\n");
   
}
    
return 0; 
}