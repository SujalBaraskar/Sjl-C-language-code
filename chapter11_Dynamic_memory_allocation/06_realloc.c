#include<stdio.h>
int main(){ 
    int*ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for (int i=0;i<6;i++){
    printf("Write the value of element %d ",i+1);
    scanf("%d",&ptr[i]);
    }
    for (int i=0;i<6;i++){
    printf(" The value of %d element is : %d\n",i+1,ptr[i]);}



    ptr=realloc(ptr,10*sizeof(int));



    for (int i=0;i<10;i++){
    printf("Write the value of element %d ",i+1);
    scanf("%d",&ptr[i]);
    }
    for (int i=0;i<6;i++){
    printf(" The value of %d element is : %d\n",i+1,ptr[i]);}
return 0;
}
/*
abhi humne dusre loop me kiya kya haina ki humne no. of int bdha diye hai . Lekin humne pehle he use bus 6 int 
ki jagah allocate ki thi to 4 aur extra kaha se store krege
To isliye humne use kiya realloc functiion .
Aur humne bina koi dusre memory use krte hue usi chunk of memory me 4 ints ki jagah add kr di hai.
Therfore humari memory usage bhi km ho gayi hai.
*/