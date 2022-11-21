#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};
int main(){
    struct employee sujal ={100,34.2,"sujal"};
    printf("%d\n",sujal.code);
    printf("%.3f\n",sujal.salary);// isse ans bus 3 decimals tk aayega
    printf("%s\n",sujal.name);

    struct employee sjl={5.0};//all elements set to zero
    printf("%d\n",sjl.code);
    printf("%.3f\n",sjl.salary);
    printf("%s\n",sjl.name);
}
/* 
Structures in memory:
Structures ate stored in contiguous memory locations for the structure e1 of type 
struct employee , memory layout looks like this:
|100|71.22|"sujal"|
78810,78814,78818---->addresses

In an array of structures , these employee instances are stored adjacent to each other
|100|71.22|"sujal"|100|71.22|"sjl"|
78810,78814,78818  78819,78823,78827-----addresses

*/