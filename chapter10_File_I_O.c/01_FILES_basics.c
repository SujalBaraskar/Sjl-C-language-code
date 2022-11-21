/* 
"FILES" is a structure which needs to be created for opening the file.
A file pointer is a pointer to this structure of the file.
FILE pointer is needed for communication between the file and the program.
A file pointer canbe created as follows:
FILE*ptr;
ptr=fopen("filename.extension","mode");----->mode means whether you want to read the file or you want to write the file

*/
#include<stdio.h>
int main(){ 
    FILE*ptr;
ptr=fopen("sample.txt","r");//---> this function is used for reading the file
ptr=fopen("sample.txt","w");//-->for writing the file
return 0;
}
//and both codes are used for opening the file depending on your preferences whether you have to only read the file or you want to write the file
