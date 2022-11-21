#include<stdio.h>
int main(){ 
    int a,b;
    int array[a][b];
    printf("enter the no of rows you wanna print\n");
    scanf("%d",&a);
    
    printf("enter the no of columns you wanna print\n");
    scanf("%d",&b);

    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("enter the value for row %d and column %d\n",i+1,j+1);
            scanf("%d",&array[i][j]);

        }
        
    }
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d",array[i][j]);
            }
            printf("\n");
 }
    
return 0;
}