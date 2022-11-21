//Write problem 5's structure using typedef keyword
#include<stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}sjl;
void display(sjl str, int i);
int main(){ 
    struct complex com[5];
    for (int i=0;i<5;i++){
        printf("Enter the value of real number %d :\n",i+1);
        scanf("%d",&com[i].real);
        printf("Enter the value of imaginary number %d:\n",i+1);
        scanf("%d",&com[i].imaginary);
    }
    for (int i=0;i<5;i++){
    display(com[i],i);}

return 0;
}
void display(struct complex str,int i){
    
        printf("The value of real number %d is: %d\n",i+1,str.real);
        printf("The value of imaginary number %d is: %d\n",i+1,str.imaginary);
    

}