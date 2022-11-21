#include<stdio.h>
int main(){ 
     FILE*ptr;
    // ptr=fopen("05getc_demo.txt","r");
    // printf("the value of character is %c\n",fgetc(ptr));
    // printf("the value of character is %c\n",fgetc(ptr));
    // printf("the value of character is %c\n",fgetc(ptr));
    // printf("the value of character is %c\n",fgetc(ptr));
    // printf("the value of character is %c\n",fgetc(ptr));
    // printf("the value of character is %c\n",fgetc(ptr));
    //fgetc reads the file character by character
    //so by using for loop we can print the whole text

    ptr=fopen("05demofileputc.txt","w");
    putc('c',ptr);//'c' is telling that we are putting c in it
    fclose(ptr);
return 0;
}