//Write a program to find whether the character exist in string or not 
#include<stdio.h>
#include<string.h>
void existence(char*str,char a);
int main(){ 
    char str[]="sujal";
    existence(str,'b');
    return 0;
}
void existence(char*str,char a){
    char*ptr=str;
    
    while(*ptr='\0'){
        if(*ptr==a){
            break;
        }
        ptr++;

    }
    if (*ptr=='\0'){
        printf("the given character do not exist");
    }
    else{printf("the given character exist");}
    

}