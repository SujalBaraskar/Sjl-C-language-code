#include<stdio.h>
int main(){
    char s[35];
    printf("Please enter your name: ");
    //gets function is used to take input of characters with spacing
    gets(s);//the entered string is stored in 's'
    //puts function is used to output a string
    puts(s);//prints the string and places the cursor on the next line

    //printf("Your name is : %s",s); this normal printf statements is also used to print the characters but puts is another method to print the characters
return 0;
}
/* 
Declaring a string using pointers 
We can declare strings using pointers 
char*ptr="Sujal";
This tells the compiler to store the string in memory and assigned address is
stored in a char pointer



*/