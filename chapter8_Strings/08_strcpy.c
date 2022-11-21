/*
2.Strcpy()
 This function is used to copy the content of second string into first string passed to it
 char source[]="Sujal";
 char targer[30];
 strcpy(target,source); targer now contains sujal
 */

#include<stdio.h>
#include<string.h>
int main(){ 
    char*str="Sujal";
    char str2[35];
    strcpy(str2,str);
    printf("now the str2 is %s",str2);
return 0;
}