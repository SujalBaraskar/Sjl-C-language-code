//the value of integer expression is matched against c1,c2,c3 etc .if it matches any of subsequent "case", that case along with all subsequent "case" and "default" statements are executed (this condition is witout break)
#include<stdio.h>
int main(){
    int rating;
    printf("give the rating from (1-5)");
    scanf("%d",&rating);
    switch(rating <3){
        case 1:     // format ------------ case c1 (where c1 is a constant)and here "ratings"is giving constants to c1,c2,c3...cn
        printf("your rating is 1\n");
        break; //break is important ,because if break is not there then after finding one case right it will print all the case below it
        case 2:
        printf("your rating is 2\n");
        break; //break is important 
        case 3:
        printf("your rating is 3\n");
        break; //break is important 
        case 4:
        printf("your rating is 4\n");
        break; //break is important 
        case 5:
        printf("your rating is 5\n");
        break; //break is important 
        default: // if above none of the statement is true then at last default statement is printed
        printf("your rating is invalid\n");
        break; //break is important 

    }
    return 0;
}