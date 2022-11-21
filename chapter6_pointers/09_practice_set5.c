#include<stdio.h>
int main(){ 
    int i =4;
    int*j=&i;
    int**o=&j;
    printf("the value of i is %d",**o);
//ab kaisa haina jb hum pointer to pointer value store krne ko star badhate haina to usi tarah pointer ki value likhne ko bhi *badhane pdte hai
//ab pointer ki value *pointer dega waise he pointer to pointer ki value **pointer to pointer dega
return 0;
}