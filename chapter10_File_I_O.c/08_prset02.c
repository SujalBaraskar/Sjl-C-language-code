//Write a program to generate a file of the multiplication table of which user want to
#include<stdio.h>
int main(){ 
    int a;
    FILE*ptr;
    printf("Enter the number whoes multiplication table you want to print");
    scanf("%d",&a);
    ptr=fopen("08generated.txt","w");
    for(int i=0;i<10;i++){
        if(i==0){fprintf(ptr,"\n");}
        fprintf(ptr,"%dx%d=%d\n",a,i+1,a*(i+1));
    }
    fclose(ptr);
    printf("successfully generated table of %d",a);
return 0;
}