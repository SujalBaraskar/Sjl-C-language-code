//while---> checks the condition and then executes the code
//do while ----> Executes the code and then checks the condition
// format=do{code;}while(condition);
//do while loop will be executed at least once,,for example
#include<stdio.h>
int main(){
    int i=20;
    do {
        printf("the value of i is %d",i);
        i++;

    } while(i<10);

    return 0;
}//here according to us 20 should not be printed as it is greater than 10,but it will be executed as,
// do while loop is executed at least once, because command is written first and then condition
