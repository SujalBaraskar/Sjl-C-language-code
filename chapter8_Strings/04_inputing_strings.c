#include<stdio.h>
int main(){
    char s[35];
    printf("Please enter your name: ");
    scanf("%s",s);//yeha & is liye nhi lagare kyuki isme pehle se he first element ka address store hota hai 
    printf("Your name is : %s",s);
//Scanf automatically adds the null character when the enter key is pressed
return 0;
}
//Note
/* 
1. The string should be short enough to fit into the array 
   for ex: char arr[5] to jo bhi hum input krege woh 5 character se bada nhi hona chiye
2. Scanf cannot be used to input multi word strings with spaces.
  therfore we use gets and puts function
*/