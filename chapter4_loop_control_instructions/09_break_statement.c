//break statement is used in three of loop statement ie;while, do while, for loop
//break statement format----> if(condition){break;}
#include<stdio.h>
int main(){ 
    int i;
    for( i=0;i<1000;i++){
        printf("the value of i is %d\n",i);
        if(i==10){                 //this is the break statement
            break;
        }
    }
return 0;
}