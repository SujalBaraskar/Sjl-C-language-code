//Arrays can be written in 2 ,3 4...n in n dimensions 
//arrays in 2 dimensions is just like matrices that we studied in lower classes
#include<stdio.h>
int main(){ 
    int students=3;
    int subs=5;
    int marks[3][5];
    for (int i=0;i<students;i++){
        for (int j=0;j<subs;j++){
            printf("please provide marks of student %d in sub %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }

    }
    for(int i=0;i<students;i++){
        for(int j=0;j<subs;j++){
            printf("the marks of student %d in sub %d is : %d \n",i+1,j+1,marks[i][j]);

        }
    }
return 0;
}
/* 
this is nothing complex , it is all about simple matrices
for (int i=0;i<students;i++){
        for (int j=0;j<subs;j++){
            printf("please provide marks of student %d in sub %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    lets break down this loop
    for (int i=0;i<students;i++) this loop is giving the value for no. of students
    initially it will give 0 as value for no. of students to second for loop

    for (int j=0;j<subs;j++){
            printf("please provide marks of student %d in sub %d\n",i+1,j+1);
    now this second for loop will continue till  it stores the value of 5 subs  with initial value of students 0

    scanf("%d",&marks[i][j]);
    now this scanf will store the value for marks[0]marks[0]--> value for first row first column
                                            marks[0]marks[1]--> value for first row 2 nd column
                                            marks[0]marks[2]--> value for first row 3rd column
                                            marks[0]marks[3]--> value for first row  4th column
                                            marks[0]marks[4]--> value for first row   5th column
this loop ends here 
now with the value of i=1 it will again enter the second loop and record marks for 5 subs
                             marks[1]marks[0]--> value for second row first column
                             marks[1]marks[1]--> value for second row 2 nd column
                             marks[1]marks[2]--> value for second row 3rd column
                             marks[1]marks[3]--> value for second row  4th column
                             marks[1]marks[4]--> value for second row   5th column
                             this loop ends here 
now with the value of i=2 it will again enter the second loop and record marks for 5 subs
                             marks[2]marks[0]--> value for third row first column
                             marks[2]marks[1]--> value for third row 2 nd column
                             marks[2]marks[2]--> value for third row 3rd column
                             marks[2]marks[3]--> value for third row  4th column
                             marks[2]marks[4]--> value for third row   5th column
here both the loops ends and will store the value of 3 students and 5 subs
in form of 3 rows and 5 columns (marks[3][5])
this is how we can create 3 dimension and so on till n dimensions 


*/