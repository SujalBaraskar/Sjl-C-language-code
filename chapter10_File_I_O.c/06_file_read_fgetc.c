#include<stdio.h>
int main(){
    FILE*ptr;
    char c;
    ptr=fopen("05getc_demo.txt","r");
    c=fgetc(ptr);
    while(c!=EOF){//EOF means end of file.EOF is a constant
        printf("%c",c);
        c=fgetc(ptr);
    }
    fclose(ptr);


return 0;
}
//fgetc hume read krne me help krta hai ek character
//fputc hume write krne me help krta hai ek character
/* 
fgetc returns EOF when all the characters from a file have been read.And we can also
write another way of creating loop
while(1){ 
    ch=fgetc(ptr);
    if(ch==EOF){
        break;
    }
}
1 means it will be always true
till the loop is not breaked internally
*/