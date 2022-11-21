#include<stdio.h>
int main(){ 
    int a=3;
    printf("%d %d %d",a,++a,a++);
    return 0;
}
//expected output: 3, 4 ,4 (kyuki 2nd term me he a +1 se bdh gya hai to isliyr 3rd time bhi 5 print hoga)
 // aur kyuki usme ++ baad me laga hai isliye 5 ne koi +1 hoke print nhi hoga
  

  /*
  reality: 5,5,3
  when we pass arguments(a) to a function(%d) then they do not pass into left to right
  order , but depends on the compiler whether it passes from left to right or right to left
  And gcc passes in  right to left side that is why result is opposite of what we expected
  printf("%d %d %d", a , ++a , a++)
                      |     |      |
                      |     |  3will come here first and will give output for a++ ie;3 but kyuki is me ++ bhi hai to 3 me+1 hoga aur 4 dega (print to a he hoga lekin aage ++ hai islliye +1 ho jayega print ke baad) 
                      |    4 will come here then after  a++ and will give output for ++a ie; 5
                       then 5 will come here and will give output for a ie;5
But the catch here is that it will be printed in  left to right order only (4,4,3) , but is interpreted in right to left side  */
                           
//this type of questions can be asked in interviews so before giving ans please ask what compiler are we using or in which order compiler is passing arguments

