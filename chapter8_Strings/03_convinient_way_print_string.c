//A string can be printed character by character using printf and %c
//But there is another conveinient way to print strings in C
/* 
char st[]="sujal"
printf(%s,st); where %s helps to print entire string
can also take input of characters using %s and scanf 
*/
#include<stdio.h>
int main(){ 
    char*ptr="Sujal";
    printf("%s",ptr);
return 0;
}