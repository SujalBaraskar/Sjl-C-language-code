/*
There are two types of files:
Text file: (.txt , .c)
Binary file(.jpg , .dat)

A file can be opened for reading as follows:
*/
#include<stdio.h>
int main(){ 
    FILE *ptr;
    
    int num,num2;
    ptr=fopen("02sjl.txt","r");
//Lets assume  that "sjl.txt"contains an integer we can read thar integer using 
 fscanf(ptr,"%d",&num);//and store it in num variable
 printf("the value of num is %d\n",num);


//lekin yaad rkho yeh ek baar me ek he no. store krwa skta hai agr series me 33,84 likha hai koi file me
//to num me bus 33he store hoga aur 84 ko laane ke liye dusra fscanf lga kr num2 me store kran pdega
fscanf(ptr,"%d",&num2);//and store it in num variable
 printf("the value of num is %d\n",num2);


return 0;
}