//As fscanf is used to read the file similarily fprintf is used to print contents in file
#include<stdio.h>
int main(){ 
    FILE*ptr;
    int number=45;
    ptr=fopen("04generated.txt","w");
    fprintf(ptr,"The number is %d\n",number);
    fprintf(ptr,"Thanks for using fprintf here");
    fclose(ptr);
return 0;
}