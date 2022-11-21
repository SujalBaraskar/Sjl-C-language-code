#include<stdio.h>
void wahi();
int main(){ 
    int i=5;
    printf("the value of i++ is %d\n ",i++);
    //yeha 5 isiliye print hoga kyuki i++ ka matlab hota hai pehele i print kro fir increment kro
     printf("the value of i is %d\n ",i);//aur yeha increment hokr phir value 6 print hogi
     printf("the value of ++I is %d\n ",++i);
//yeha 7 isiliye print hoga kyuki ++I ka matlab hota hai pehele increment kro fir i print kro 
   printf("the value of i is %d\n ",i);//aur yeha increment hokr phir value 7 print hogi
   i+=10;//Increments i by 10
 printf("the value of i is %d\n ",i);



return 0;

}
//so these is the difference between i++ and ++i
//vice versa in 'i--' and '--i'
//'+++' does not exist
//'+='assignment operator just like -=, *=, /= ,%=