//create an array of [3] [10] containing table of 2,9and7 

#include<stdio.h>
void multtable(int*arr,int n,int num){//agr *ke baad direct hum array ka naam likh de to array pass krte waqt & nhi likhn a pdta
    for(int i=0;i<n;i++){
        arr[i]= num*(i+1);
    }
for(int j=0;j<n;j++){
    printf("%d x %d = %d\n",num,j+1,arr[j]);
}
printf("****************************\n\n");
}
int main(){ 
    int a,b,c;
    
    printf("How many tables you want to print\n");
    scanf("%d",&a);
    printf("Till how much digits you want to print\n");
    scanf("%d",&b);
    int arr[a][b]; //iska mtlb yeh bhi hai ki teen 1 d arrays me hume 10 values store ki hai
    int numb[a];
     printf("please provide with %d number whose table you want to print\n",a);
     int*input=numb;
    for(int k=0;k<a;k++){
        printf("%d-->",k+1);
        scanf("%d",&numb[k]);
    }
    for(int i=0; i<a;i++){
        
        multtable(arr[i],b,*(input));
        input++;

    }
    
   
return 0;
}