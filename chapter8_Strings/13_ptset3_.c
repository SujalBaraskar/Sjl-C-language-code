//Write a program to incrypt a program
#include<stdio.h>
void encrypt(char*str);
int main(){ 
    char str[]="Sujal prabhakar baraskar";
    encrypt(str);
    printf("%s",str);

return 0;
}
void encrypt(char*str){
    char*ptr=str;
    while(*ptr!='\0'){
        *ptr=*ptr+1; //iska mtlb hai ki jo us pointer pe alphabet hai uski ascii value me +1 kr do yaani agr koi char ke ascii value hogi 98 to usme hoga +1=99 to 99 jis bhi char ki ascii value hogi woh waha aa jayega

        ptr++;
    }

}