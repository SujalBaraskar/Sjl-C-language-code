//write a program to read three integers from a file
#include<stdio.h>
int main(){ 
    int num1,num2,num3;
    FILE*ptr;
    ptr=fopen("07_prset01_sample.txt","r");
    // fscanf(ptr,"%d",&num1);
    // fscanf(ptr,"%d",&num2);
    // fscanf(ptr,"%d",&num3); or you can also use another method
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    fclose(ptr);
    printf("The value of three integers in txt file are %d,%d,%d",num1,num2,num3);
return 0;
}