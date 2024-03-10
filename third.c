#include <stdio.h>

int main() {
    float a = 0.03; 
    float b = a - 0.03;
    b = b - 0.04;
    float c = b - 0.90;  
    printf("b : %.2f", b);
    printf("c : %.2f", c);
     return 0;
}