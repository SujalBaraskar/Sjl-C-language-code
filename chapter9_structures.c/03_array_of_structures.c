#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
    };
    int main(){ 
    struct employee e[10];
     e[0].code=100;
    e[0].salary=34.454;
    strcpy(e[0].name,"sujal");

    printf("%d\n",e[0].code);
    printf("%.3f\n",e[0].salary);// isse ans bus 3 decimals tk aayega
    printf("%s",e[0].name);
     e[1].code=1200;
    e[1].salary=334.454;
    strcpy(e[1].name,"dfff");

    printf("%d\n",e[1].code);
    printf("%.3f\n",e[1].salary);// isse ans bus 3 decimals tk aayega
    printf("%s",e[1].name);
     e[2].code=101;
    e[2].salary=335.454;
    strcpy(e[2].name,"uo");

    printf("%d\n",e[2].code);
    printf("%.3f\n",e[2].salary);// isse ans bus 3 decimals tk aayega
    printf("%s",e[2].name);

return 0;
}