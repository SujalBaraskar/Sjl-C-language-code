//Take a name and salary of two emoloyees as input from the user and write them to a text file int the following format; name1,3300
#include<stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("12output.txt","w"); 
    char name[10];
    char name2[10];
    int salary;
    int salary2;
    printf("Please provide your name\n");
    scanf("%s",&name);
    printf("Please provide your salary\n");
    scanf("%d",&salary);
    
    fprintf(ptr,"name is %s\n",name);
    fprintf(ptr,"salary is %d\n",salary);
   
    printf("Please provide your name\n");
    scanf("%s",&name2);
    printf("Please provide your salary\n");
    scanf("%d",&salary2);
    
    fprintf(ptr,"name is %s\n",name2);
    fprintf(ptr,"salary is %d\n",salary2);
    fclose(ptr);
return 0;
}