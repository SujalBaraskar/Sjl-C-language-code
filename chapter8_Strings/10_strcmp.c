/* 
4.Strcmp
 This function is used to compare two strings 
 It returns :0 if strings are equal
 Negative value of first strings mismatching characters ASCII value is not greater 
 than second strings corrresponding mismatching  characters. It returns positive value
 strcmp("hello","hellz") now here value will be  ascii val ofs1-ascii val ofs2 
 here it will be 111-122= -11 (compiler will return it in the form of -1,1,or 0 it will not give the vlaue of real diff)
 whether it will be positive or negative difference or 0
*/
#include<stdio.h>
#include<string.h>
int main(){ 
    char str2[35]="hello";
    char*str="hellz";
    int val =strcmp(str2,str);
    printf("now the val is %d",val);
return 0;
}