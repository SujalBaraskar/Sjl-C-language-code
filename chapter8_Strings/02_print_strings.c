#include <stdio.h>
int main(){
    char str[]="Sujal";
    //char str[]={'S','u','j','a','l','\0'};
    char*ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}