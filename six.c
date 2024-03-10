#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int counter=0;
     while(i<10){
        if(a[i]%2!=0){
        counter++;
         } i++;
     }printf("The odd count is: %d",counter);
}
// 1. find the maximum element in an array;
// 2. find the minimum element in an array;
// 3. find the prime numbers in an array;
//Reading: https://www.geeksforgeeks.org/c-arrays/