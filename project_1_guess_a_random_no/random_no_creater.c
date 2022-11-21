#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(){ 
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; //generates a random number between 1 to 100
    //keep running loop until guess is correct
    printf("%d",number);
    return 0;}