/* 
Create an array of 5 complex numbers and them display them with the help of display
function . the values must be taken as input from the user
*/
#include<stdio.h>
struct complex{
    int real;
    int imaginary;
};
void display(struct complex str, int i);
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