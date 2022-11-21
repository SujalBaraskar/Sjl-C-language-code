#include<stdio.h>
float avg (int a ,int x , int z);
int main(){
    
    int b,c,d;
   
    printf("Enter the number\n");
    scanf("%d %d %d",&b,&c,&d);
    avg(b,c,d); 
    printf("The average of given no is %f",avg(b,c,d));
    
    
return 0;
}
float avg (int a,int x , int z){
    float average;
    average=(float) (a+x+z)/3; // float is liye likha kyuki agr hum integer values le rhe hai as input aur use int se he divide kr rhe hai to and int me he aayega isliye use floar me typecase kiya
return average;
}
//float values me aapko kitne decimal tk chaiye woh aap dicide kr skte hai %0.1f likh kr ek decimal place tk decimal tk aur %0.2 se 2 wagera wagera
