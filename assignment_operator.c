#include<stdio.h>
int main(void){


    int a = 20;
    // a = a+5;
    a += 5;
    printf("addition: %d\n",a);
    // a = a-5;
    a -= 5;
    printf("Subtraction: %d\n",a);
    // a = a*5;
    a *= 5;
    printf("Multiplication: %d\n",a);
    // a = a/5
    a /= 5;
    printf("division: %d\n",a);
    // a = a%5;
    a %= 5;
    printf("mod: %d\n",a);
    return 0;
}