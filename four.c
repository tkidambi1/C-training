#include<stdio.h>
int main(){
    int a[10];
    int i=0;
    printf(" Array is reay for you input the numbers: ");
    while (i<=9){
        printf("Now saving to index: %d\n",i);
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<10){
        printf("%d, is the value at index %d\n",a[i],i);
        i++;
    }
    return 0;
}    