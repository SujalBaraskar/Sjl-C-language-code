/*(3*2)+1
    *,+,-,/ are the operators 
    ant the digits used are called as operands*/
#include<stdio.h>
#include<math.h>
int main() {
int a=4;
int b=5;
printf("the value of a+b is %d",a+b);
printf("the value of a-b is %d",a+b);
printf("the value of a*b is %d",a+b);
printf("the value of a/b is %d",a+b);

int z;
z=b*a ; //legal
//b*a=z; //illegal
printf("the value of z is %d",z);

//' %' operator gives the remainder of numbers in division
printf("5 when divided by 2 leaves a remainder of%d\n",5%2); //which means remainder of 5 divided by 2
printf("-5 when divided by 2 leaves a remainder of%d\n",-5%2); //here ans will come -5 as in this case system counts the sign of numerator only
printf("5 when divided by -2 leaves a remainder of%d\n",5%-2); //here ans will come 5 as in this case system counts the sign of numerator(ie;5 which is positive) only

//there is no operator to perform exponention in C
printf("the value of 4^5is %d\n",4^5); //this will not give the ans but either will not throw any error as system will take '^' as an bitwise or operator and give output 1
//so to get the valu eof 4^5 first of all we have to include library '#include<math.h>' and then use pow(4,5)
printf("the value of 4 to power 5 is %f\n",pow(4,5)); //and strictly have to write %f


printf ("the value of 6+5 is%d \n ",6+5); // int+int===>int
printf ("the value of 5/2 is%d\n ",5/2); // int+int===>int and this will provide ans 2 only not 2.5

printf ("the value of 6+0.5 is %f\n",6+0.5);//int+float===> float 
printf ("the value of 5.0/2 is %f\n",5.0/2);//int+float===> float  but sice here is float and int therfore the outcome will come 2.5 ie;float

printf ("the value of 6.0+0.5 is %f\n",6+0.5);//float+float===> float


/*if we type
 int a=3.5 then since it is a float value therefore it will consider value as 3 not 3.5
 float a=3 then since it is a int value therefore it will consider value as 3.0 not 3*/


return 0;

}