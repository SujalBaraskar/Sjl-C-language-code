#include<stdio.h>
void goodmorning();
void goodAfternoon();
void goodnight();
int main(){
goodmorning();
goodAfternoon();
goodnight();
return 0;
}
void goodmorning(){
    printf("Good morning sjl \n");
}
void goodAfternoon(){
    printf("Good Afternoon  sjl \n");
}
void goodnight(){
    printf("Good night sjl \n");
}


//imp notes
/* 
1.Execution of a C program starts from main
2. A "C" program can have more than one function
3. Every function gets called directly and indirectly from main()
4. There are two types of functions in C 
   first: Library function
   second: user defined function


*/
// Library functions------> Commonly required functions grouped together in a library filr on disk
// User defined functions --------> These are the functions declared and defined by he user.
