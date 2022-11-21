//Write a function slice to a string . It should chage the original string  such that it is now the sliced string.Take m and n as the start and ending position for slice.
#include<stdio.h>
void slice(char*str,int m,int n);
int main(){ 
    int a,b;
    char c;
    char str[10];
    printf("Please provide with the sentence");
    scanf("%s",&str[10]);
    

    printf("Please provide from where u want to slice the sentence");
    scanf("%d",&a);
    printf("Please provide till which character u want to slice the sentence");
    scanf("%d",&b);
    slice(str,a,b);
    printf("%s",str);

return 0;
}
void slice(char*str,int m,int n){
    int i=0;
    while ((m+i)<n){
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';
}