#include<stdio.h>
int main(){ 
    int skip=5; int i=0;
    while(i<10){
        i++;
        if (i!=skip){ //agr value of i is not 5 then continue  to the loop
            continue;//continue kya krta haina ki agr uski if condition true aati hai to phir contintue ke niche wala code run nahi hoga
        }//to isiliye program ka output 5 rahega,kyuki jaise he i ki value 5 hogi if wali statement false ho jayegi aur else wala part execute hoga
        else{printf("the value of i is %d",i);
    }
return 0;
}
/* notes

1. some times the name of variable might not indicate the behaviour of the program
2. break statements completely exits the loop
3.  continue statement skips the particular iteration(ie; below it ) of the loop

*/