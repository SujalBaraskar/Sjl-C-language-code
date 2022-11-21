//Create  a game of snake water and gun;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int snakewatergun(char you, char comp);
int main(){ 
    char you,comp;
    char s,w,g;
    
    srand(time(0));
    int number=rand()%100+1; //generates a random number between 1 to 100

    if (number<33){
        comp='s';
    }
    else if (number>33 && number<66){
        comp='w';
    }
    else{comp='g';}
    
    printf("Please write s for snake w for water,g for gun\n");
    scanf("%c",&you);
    int result= snakewatergun(you,comp);
    printf("Your choice was %c and choice of comp is %c\n",you,comp);
    if(result==-1){
        printf("you loose");
    }
    if(result==1){
        printf("you win");
    }
    if(result==0){
        printf("The match is drawn");
    }
    return 0;
    }
    int snakewatergun(char you, char comp){
        //Writing the conditions for playing the game
        //condition for draw
        if(you==comp){
            return 0;
        }
        //Conditions for win or lose

        if (you=='s' && comp=='w'){
            return 1;

        }
        else if (you=='w' && comp=='s'){
            return -1;

     
        }
        if (you=='s' && comp=='g'){
            return -1;

        }
        else if (you=='g' && comp=='s'){
            return -1;

     
        }
        if (you=='g' && comp=='w'){
            return -1;

        }
        else if (you=='w' && comp=='g'){
            return 1;
        
     
        }
    }
    
    