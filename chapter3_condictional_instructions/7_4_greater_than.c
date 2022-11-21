#include <stdio.h>

int main(){
int num1,num2,num3,num4,a,b,c,d;
printf("please input 4 numbers\n");
scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
if (num1>num2){
    a=num1;
}
else {a=num2;}
if (a>num3){
    b=a;
}
else{
    b=num3;
}
if (b>num4){
    c=b;
}
else {c=num4;}
printf("%d is greatest of all numbers",c);

return 0;}