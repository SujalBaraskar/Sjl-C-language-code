//Write a program to read a text file character by character and write its character twice itn a separate file
#include<stdio.h>
int main(){ 
    FILE*ptr1;
    FILE*ptr2;
    ptr1=fopen("09_atxt_file03.txt","r");
    ptr2=fopen("09prset_generated.txt","w");
    char c=fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
return 0;
}