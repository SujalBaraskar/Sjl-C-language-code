#include<stdio.h>
int main(){ 
    int array[2][3];
     for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter the value for row %d and column %d\n",i+1,j+1);
            scanf("%d",&array[i][j]);

        }
        
    }
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array[i][j]);
            }
            printf("\n");
 }
return 0;
}