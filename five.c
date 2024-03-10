#include<stdio.h>
int main(){
    int a[5]= {1,2,3,4,5};
    int i=0;
    int sum=0;
    while(i<5){
        sum = sum+a[i];
        i++;
    }printf("%d is the sum of the array",sum);
    return 0;
}