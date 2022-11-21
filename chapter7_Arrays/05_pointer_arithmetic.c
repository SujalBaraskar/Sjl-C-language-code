#include<stdio.h>
int main(){
    int i=85;
    int*j=&i;
    printf("the value of j is %u\n",j);
    j++;
    printf("the value of j is %u\n",j);

    char a='a';
    char*b=&a;
    printf("the value of j is %u\n",b);
    b++;
    printf("the value of j is %u\n",b);
return 0;
}//here we can see the value of address is incrementing by 4 this is because the size of integer is 4
//if we will increment it by 1 so address will add up to initial value+its size
//for example if we store character and print its value and then increment it by 1
//its address will increase by 1 (initial value+its size)that means size of integer is 1
//that means we can use this method to get the size of any type of data
/* 
Use of it in arrays :
see if we write a array int a[2] where a[0]=8 (having memory location 87994),a[1]=2 (having memory location 87998)
now int*j=&a[0] (here j is pointer of a[0])
j++; here we will increment it s value by 1
therefore 87994+4=87998
this means this is now pointing to a[1]
this is how we can get the values off array by incrementing of decrementing the pointer values
*/
//Note we can increment pointer how many times we want
//ptr++ or ptr=ptr+n(it can be 1,2,3,......n)

/* 
Following operations can be performed on a pointers :
1. Addition of a number to a pointer
2. Subtraction of a number from pointer
3. Subtraction of one pointer from another
4.Comparison of two pointer variables

*/