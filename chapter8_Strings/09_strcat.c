/* 
3.Strcat()
 This function is used to concatenate two strings
 char s1[10]="sujal";
 char s2[12]="is Sjl"

 strcat(s1,s2)-------> s1 now contains "sujalis Sjl"
*/
#include<stdio.h>
#include<string.h>
int main(){ 
    char str2[35]="sjl is";
    char*str="Sujal";
    strcat(str2,str);
    printf("now the str2 is %s",str2);
return 0;
}