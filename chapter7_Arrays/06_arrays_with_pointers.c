#include<stdio.h>
int main(){ 
    int marks[4];
    int*ptr;
    //ptr= &marks[0]; insted of these we can also simply write only &marks also
    ptr= &marks;
    for(int i=0;i<4;i++){
    printf("Provide with marks of student no.%d\n",i+1);
    scanf("%d",ptr);//since ptr itself is storing address of marks[0] therefore we can directly write ptr
    ptr++; //everytime after +1 it will point to incremnting array that is mark[1] and so on till [3]
    }      //as array are stored in continous order one after another in memory

    for (int i=0;i<4;i++){
        printf("marks of student %d is : %d\n",i+1,marks[i]);
    }
    

return 0;
}