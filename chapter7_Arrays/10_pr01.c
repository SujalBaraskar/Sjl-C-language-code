//create an array of 10 numbers . Verify using pointer arithmetic that(ptr+2) points to the third element whereptr is a pointer pointing to first element
//solving it by using comparison of two pointers
#include<stdio.h>
int main(){ 
    int array[10];
    int*ptr=&array[0];
    ptr=ptr+2;

   if(ptr==&array[2]){printf("this points to the same location in memory");}
   else{printf("this do not points to the same location in memory");}
return 0;
}