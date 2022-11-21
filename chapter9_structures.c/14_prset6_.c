//Write a structure to store date 
#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;
int comp(date d1,date d2);
int main(){ 
    date d1={5,12,2022};
    date d2={5,11,2021   };
    comp(d1,d2);
    printf("the return value of compare function is :%d",comp(d1,d2));
return 0;

}
int comp(date d1,date d2){
//first we will compare year
if(d1.year>d2.year){
    return 1;
}
if(d1.year<d2.year){
    return -1;
}
//If year also is same then compare month
if(d1.month>d2.month){
    return 1;
}
if(d1.month<d2.month){
    return -1;
}
//if month is also same then compare day
if (d1.day>d2.day ){
    return 1;
}
if (d1.day<d2.day ){
    return -1;
}
//and if year,date,month all are same then return 0
return 0;
}
/*
aab aap soch rhe hoge ke ye kaam kaise krta hai
humne jitne bhi conditions likhi hai agr usme ek bhi condition true nikalti hai 
to use ek return value di hai phir us condition ke baad koi bhi condition execute 
nhi hogi
agr smjo pehli condition he true nikalti hai to woh return karega 1  aur phir uski 
baad ki koi bhi conditions execute nhi hogi
yeh hai power return function ki
aur agr in me se koi bhi condition true nhi nikli to akhir me return kro 0
jiska meaning hoga ki dono dates same hai
*/