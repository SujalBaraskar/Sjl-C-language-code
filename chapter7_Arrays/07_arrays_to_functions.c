#include<stdio.h>
void printarray(int*ptr,int n);
int main(){ 
    int n;
    int marks[n];
    printf("enter how many students marks you want to enter");
    scanf("%d",&n);
    for( int i=0;i<n;i++){
     printf("please provide with the value of %d student:",i+1);
     scanf("%d",&marks[i]);
    
}
printarray(marks,n);

return 0;
}
void printarray(int*ptr,int n){ //idhar humane function ko array ka address pass kiya hai aur saath me array ki capacity kitni hai woh pass ki hai in form of 'n'
    for(int i=0; i<n;i++){ //hum chahte to isko array bhi pass kr skte the lekin fir hume function likhna pdta printarrray(int ptr[],int n) phir hum use input dete array ka marks likh ke 
        printf("the value of %d student is: %d\n",i+1,*(ptr+i));//yeha +i krke hum array ke agle element ko point kra rhe hai kyuki hume pta hai ki array memory me ek ke piche ek store hote hai
    }
}