#include<stdio.h>
#include<stdlib.h>
int main(){ 
    int*ptr;
    //ptr=malloc(6*sizeof(int));//aab hum yeha pr sizeof(int )ke jagah 4 bhi likh skte the
                 //lekinkyuki ho skta hai koi aur pc ki architecture me int ka size alg ho isiliye 
// printf("the size of int in my pc is %d\n",sizeof(int));
// printf("the size of float in my pc is %d\n",sizeof(float));
// printf("the size of char in my pc is %d\n",sizeof(char));
//isse hume yeh pta chlta hai ki sizeof function hume particular datatype ka size deta hai

//aab kyuki malloc ek void pointer return krta hai aur humara ptr ek int pointer hai to hume null pointer ko typecast krna pdega int me 
ptr=(int*)malloc(6*sizeof(int));
//aab hum kya kr skte hai na ki hum ise ek array ki tarah bhi use kr skte hai
for (int i=0;i<6;i++){
    printf("Write the value of %d element",i+1);
    scanf("%d",&ptr[i]);
    }
    for (int i=0;i<6;i++){
    printf(" The value of %d element is : %d\n",i+1,ptr[i]);}
return 0;   

}