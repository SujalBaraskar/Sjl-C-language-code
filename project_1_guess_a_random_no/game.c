#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(){ 
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; //generates a random number between 1 to 100
    //keep running loop until guess is correct
     printf("enter your guess please\n");
    do{
       
        scanf("%d",&guess);
        if(guess>number){
            printf("please enter a  number lower than %d\n",guess);}
            else if(guess<number){
                printf("enter a  number higher than %d\n",guess);

            }
            else{
                printf("you entered correct number in %d attempts\n",nguesses);}
                nguesses++ ;
        
    } while(guess!=number);

return 0;
}