#include <stdio.h>

int main(){
float physics ,chemistry ,maths;
float total;
printf("enter your total marks in physics\n");
scanf("%f",&physics);
printf("enter your total marks in chemistry\n");
scanf("%f",& chemistry);
printf("enter your total marks in maths\n");
scanf("%f",&maths);
total=(physics+chemistry+maths)/3;
if (total<40||physics<33||chemistry<33||maths<33){
    printf("your total percentage are %f%,YOU are failed\n ",total);
}
else printf ("HURRAY,you are passed with %f%\n",total);
return 0;
}