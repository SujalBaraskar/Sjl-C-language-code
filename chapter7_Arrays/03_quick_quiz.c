//Now this is the real power of array  

#include<stdio.h>
int main(){ 
    int marks[12],i;
    for(i=0;i<12;i++){
        printf("provide with the values of marks of student %d \n",i+1);
        scanf("%d",&marks[i]);
    }
    for (i=0;i<12;i++){
        printf("The marks of student %d is: %d \n",i+1,marks[i]);
    }
    return 0;
}