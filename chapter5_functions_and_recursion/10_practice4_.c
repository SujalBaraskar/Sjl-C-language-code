 #include<stdio.h>
 void printpattern(int s);
 int main(){ 
int a = 3;
printpattern(a);
return 0;
 }
  void printpattern(int s)
  {
      if (s==1){printf("*\n");
      return;
}
      

printpattern(s-1);



for(int i=0;i<(2*s-1);i++){
    printf("*");
}
printf("\n");



  }