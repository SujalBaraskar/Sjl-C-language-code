//int main () mtlb hum eprogram ek integer lautaega
//return 0 mtlb succesfully hume return krega (machine ke liye zero mtlb successfull hota hai)
#include <stdio.h>
int main(){
int a,b ; //mtlb a aur b ke liyejagah reserve kr di hai pehle he memory me
printf("please provide with intrger a \n " );
scanf ("%d", &a); //%d is called as format specifier , & is called ampercent (it is taking the format first ie;%d ,and is storing on the address of given variable)
// & is the address of operator and it means that the supplied valueshould be copied to the address which is indicated by specific variable
printf ("please provide the value of intrger b \n");
scanf ("%d",&b);
printf ("the value of a+b is %d \n",a+b);
printf("thanks for ur interest");
}