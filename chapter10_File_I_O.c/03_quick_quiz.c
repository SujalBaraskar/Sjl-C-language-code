//Write a program which tells that the given file is not present before opening it 
#include<stdio.h>
int main(){ 
    int num,num2;
    FILE*ptr;
    ptr= fopen("sjl.txt","r");
    if(ptr==NULL){
        printf("The file does not exist\n");
    }
    else{
    fscanf(ptr,"%d",num);
    fscanf(ptr,"%d",num2);
    fclose(ptr);//meine ise isliye close kiya kyuki iske baad meko iske resources ki zarurat nhi sb meine mere variables me store kr diye hai
    printf("The value of num is %d",num);
    printf("The value of num2 is %d",num2);}

return 0;
}