#include<stdio.h>
int main(){
     int a[10]={2,2,3,4,5,6,7,8,9,10};
     int i=0;
     int count=0;
     while(i<=9){
        printf("%d",a[i]);
        if(a[i]%2==1){
            count++;
        }
        i++;
     }printf("%d",count);
     return 0;
}
