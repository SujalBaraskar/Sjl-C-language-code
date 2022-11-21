#include<stdio.h>
int main(){
    int a[]={89,65,54}; //ek  variable me hum same tarah ki values ko daal de rhe hai
    printf("the value of a is %d\n",a[0]); 
    printf("the value of a is %d\n",a[1]); 
    printf("the value of a is %d\n",a[2]);

    float a[]={89,65,54};
    printf("the value of a is %f\n",a[0]); 
    printf("the value of a is %f\n",a[1]); 
    printf("the value of a is %f\n",a[2]); 
    

    return 0;
}
// int array[3]={1,2,3}===>usually one integer is of 4 bytes it depends on architecture of program
/* 
if interviewer asks me this question so i will first ask him the size of integers
and if he didn't tell 
i will answer him: assuming size of integer to be n therefore total size is n x 3

address of arrays:
1      2      3
|      |      |
62302 62306  62310 (assuming size of integers to be 4)
Arrays are stored in continous block of memory
Like we've seen above
so even if we are able to get address of one variable in array we can find address of 
other variables in array by adding up size of arrays in the initial value
*/