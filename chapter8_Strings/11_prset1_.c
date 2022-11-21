//Write your own implementation of strlen
#include<stdio.h>
int strlength(char arr[]);
int main(){ 
    char str[]="Sujal";

    int i = strlength(str);
    printf("THE value of strlength is %d",i);
return 0;
}
int strlength(char arr[]){
    char i=arr[i];
    int l=1;
    while(i!='\0'){
        l++;

    }
    return l;
}