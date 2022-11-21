#include <stdio.h>
//97-122 Ascii values of characters
int main(){

char ch;
printf("enter the character\n");
scanf("%c",&ch);
//97-122 lower case
if(ch<=122 && ch >=97){
    printf("it is a lower case");
}
else {printf("it is not a lower case");}
return 0;}