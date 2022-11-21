//Write a program using a function which calculates the sum and average of two numbers.Use pointers and print the values of sum and average in main()
#include<stdio.h>
void sumandavg(int a , int b , int*sum,float*avg);
int main(){ 
    //question me kaha gaya hai ki ek he function me se hume do values leni hai jo ki possible nhi
    //to hum kya krege n sum aur avg ko pehle he declare kr dege ,phir unki values function me update karayege
    int a=4,b=5,sum;
    float avg;
    sumandavg(a,b,&sum,&avg);
     printf("the sum of a+b is %d \n",sum);
     printf("the avg of a and b is %f\n",avg);

return 0;
}
void sumandavg(int a , int b , int*sum,float*avg){
    *sum=a+b;
    *avg= (float)*sum/2;// since yeha sum ek integer hai aur 2 bhi to output integer he aayega isliye hum use (float) likh ke float value me typecast krte hai

}
/* 
Ab humko pata hai ki ek function se hum do values to return nhi kra skte to humne kiya
kya na ki value return krne ki jagah use update karai 2 values jo ki possible tha
aur phir function call out ke baad un values ko print karaya
This is the power of pointers
*/