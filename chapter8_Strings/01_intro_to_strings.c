//Strings is a 1D character array terminated by a null (\0)

#include<stdio.h>
int main(){ 
//char str[]={'S','u','j','a','l','\0'}; since string is a null character it can be initilized as this
//but for the convinience c language has provided simpler way to store character
//instead of doing {'S','u','j','a','l','\0'} this just  do  this "Sujal"(This is a shortcut method) after adding characters in double quote it automatically adds \0 while compiling
char str[]="Sujal";
return 0;
}
//Strings in memory
/*
A string is stored just like an array in the memory as shown below
|S|   |u|    |j|    |a|     |l|  |0|  null character is imp as it tells compiler where does the string end  
82210 82211  82212   82213   8214   82215 this shows that characters occupy only 1 byte of memory
and are stored in contiguous blocks of memory
*/