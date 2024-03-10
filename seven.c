#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int maximum,i;
    int n=sizeof (arr)/sizeof(arr[0]);
    printf("%d",n);
    maximum=0;
    printf("Current maximum: %d",maximum);
    i=0;
    while(i<n){
        if(arr[i]>maximum){
            printf("\n%d",arr[i]);
            maximum=arr[i];

        }
        i++;

    }
    printf("maximum number =%d",maximum);
    return 0;
}