//A pointer is a variable which stores the value of another variable
/* 
jaise:
       humne store kiya i me koi integer ko
       i=72 aur uska memory me address hai 87994
       to ab humne j naam ke variable me i ka address store kiya jo ki hai 87994
       j= 87994 aur is variable ka memory address hai 87998 (jo ki ofcourse rhega kyuki humne i ke address ko bhi to ek variable me storre kiya hai na)

       so here:
       j is a pointer
       and j points to i 
       so basically these are pointers , they store the memory location of a variable

*/
// And "&" is called as 'address of'
/* 
so if we print '&i' we will get printed the address of i that is 87994
but the format specifier for printing pointer address is '%u'(not %d or %f)
(that is why we are using it while writing scanf statements scanf(%d,&a) that means we are saying it to store the particular value in address of a )
*/

//  Now we will learn abour "value at address" operator(*)
/* 
the value at adddress or * operator is used to obtain the value present at a given 
memory address . It is denoted by '*'
therefore if we print '*(&i)' then the output will be 72
and if we print '*&j' then the output will be 87994
*/

//How to declare a pointer?
/* 
A pointer is declared using the following syntax
'int*'
int*j; ------> declare a variable j of type int - pointer
j=&i; ------> store address of i in j

Just like pointer of type integer , we also have pointers t char , float etc.
int*name---> pointer to integer
char*name---->pointer to character
float*name----> pointer to float
*/