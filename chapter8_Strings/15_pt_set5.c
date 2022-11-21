//Write a program to find the no. of characters in the string
#include<stdio.h>
int occurence(char*str,char n);
int main(){ 
    char str[]="Sujjal";
    int count=occurence(str,'j');
    printf("Occurence: %d",count);
return 0;
}
int occurence(char*str,char n){
    char*ptr=str;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==n){
            count++;
           
        }
         ptr++;
    }
    return count;
}