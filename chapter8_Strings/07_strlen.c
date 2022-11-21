/*
C provides a set of standard library functions for string manipulation
some commonly used are:
strlen()
This function is used to count the number of characters in the string excluding 
the null character.
int length= strlem(st);
These functions are declared under <string.h> header file
*/
#include<stdio.h>
#include<string.h>
int main(){ 
    char*str="Sujal";
    int length= strlen(str);
    printf("the length of string is %d",length);
return 0;
}