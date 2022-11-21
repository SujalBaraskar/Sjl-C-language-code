//Write a program to decrypt a program
#include<stdio.h>
void decrypt(char*str);
int main(){ 
    char str[]="Tvkbm!qsbciblbs!cbsbtlbs";
    decrypt(str);
    printf("%s",str);

return 0;
}
void decrypt(char*str){
    char*ptr=str;
    while(*ptr!='\0'){
        *ptr=*ptr-1; //iska mtlb hai ki jo us pointer pe alphabet hai uski ascii value me -1 kr do yaani agr koi char ke ascii value hogi 98 to usme hoga -1=97 to 97 jis bhi char ki ascii value hogi woh waha aa jayega

        ptr++;
    }

}