//Write a program to read a text file character by character and write its content twice itn a separate file
#include<stdio.h>
int main(){ 
    FILE*ptr1;
    FILE*ptr2;
    ptr1=fopen("09_atxt_file03.txt","r");
    ptr2=fopen("09prset03_generated.txt","w");
    char c=fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        
        c=fgetc(ptr1);
    }
    char c1=fgetc(ptr1);
    while(c!=EOF){
        fputc(c1,ptr2);
        
        c1=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
return 0;
}