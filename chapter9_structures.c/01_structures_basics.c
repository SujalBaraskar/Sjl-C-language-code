/* 
Arrays and strings------> stores similar type of data type
Structures---------> can hold dissimilar type of data type
struct employee{
    int code;
    float salary;
    char name;
    }; this is the basic syntax of structures
    at last semicolon is important
*/
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
    };
int main(){ 
    struct employee e1;
    e1.code=100;
    e1.salary=34.454;
    //e1.name='sujal'; this wont work
    strcpy(e1.name,"sujal");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s",e1.name);

return 0;
}