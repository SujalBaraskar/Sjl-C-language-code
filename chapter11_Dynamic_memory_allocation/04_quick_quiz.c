#include<stdio.h>
#include<stdlib.h>
int main(){ 
    int n;
    int*ptr;
    printf("How many integers do you want to enter: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter the value of element %d :",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf(" The value of element %d is %d\n",i+1,ptr[i]);
    }
return 0;
}