//in c language simple mathematical rules like BODMAS , no longer applies
//the answer is provided by operator precedence & associativity
//operator precedence: the following table lists operator priority in c
/* priority     operators
      1st  :--> *,/,% priority for all these signs are same
      2nd  :--> +,- priority for all these signs are same
      3rd  :-->= */  
// this rules are valid in absence of paranthesis  
#include<stdio.h>
int main(){
int x=4;
int y=3;

printf ("the value of 3*x-8*y is %d \n",3*x-8*y); // it will simply give the value -60 , which is conventionally true
printf ("the value of 3*(x-8*y) is %d \n",3*(x-8*y)); // it will simply give the value -204, because it will calculate first the paranthesis and parenthisis is in the most highest priority


printf ("the value of 8*y/3*x is %d \n",8*y/3*x); //ans is coming 16 which is wrong
//but 24/6=4
//operator asociativity-: when operators of equal priority are present in expression,the tie is taken care of by associativity which is given below
/* x*y/z ----> (x*y)/z
   x/y*z----> (x/y)*z
*,/ follows left to right associativity, by following method lets solve ,8*y/3*x                                 */
//8*3=24
//24/3=8
// 8*2
//16 ,,,therfore this concludes that when ther is tie between *and/  it follows left to right associativity no tthe bodmas


return 0;
}


//CONTROL INSTRUCTIONS 
/* determines the flow of control in a program four types of control instructions in C are :
1. Sequence control instruction
2. Decision control Instructions 
3.Loop control instuctions 
4. Case control instructions
*/ 