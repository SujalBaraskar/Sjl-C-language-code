#include<stdio.h>
int main(){
    int age ;
    printf ("enter your age \n");
    scanf("%d",&age);
    if(age>70){
        printf("your not allowed to drive\n");
    }
    else{printf("your are allowed to drive\n");}

    if (age==50){
        printf("hurray half century\n"); // is program ka matlab hai ki agr humne 50 likha to dono statement chapege
    //lekin agr humne age likha age = 50 au rinput diya 40 or any no. other tha 50 
    }

    return 0;
}