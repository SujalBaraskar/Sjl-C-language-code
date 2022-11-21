//An array is a collection of similar elements
//One variable===> Capable of storing multiple similar data type values
#include<stdio.h>
int main(){ 
    //a begginer if we say him to store 4 values
    //int marks1,marks2, marks3,marks4;
    //marks1=56
    //marks2=85
    //marks3=24
    //marks4=78

    //the pro will use arrays 

    int marks[4];
    marks[0]=56;
    marks[1]=85;
    marks[2]=24;
    marks[3]=78;
return 0;
}
/* 
Syntax:
       The syntax of declaring an Array looks like this 
       int marks[90] ==> integer array
       char name[20] ==> character array or string
       float percentile==> float array
The values can now be assigned to marks array like this:
marks[0]=5
marks[1]=6
marks[2]=2
marks[3]=7
.
.
.
.
marks[88]=5
marks[89]=6

total elements=90 (0-89)

Note : It is very imp to note that the array index starts with 0
*/