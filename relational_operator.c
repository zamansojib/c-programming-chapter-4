#include<stdio.h>
#include<stdbool.h>
int main(void){

    int a = 35;
    int b = 25;
    bool a_is_greater = a>b;
    printf("a is greater than b: %d\n",a_is_greater);  

    bool a_is_smaller = a<b;
    printf("a is smaller b: %d\n",a_is_smaller); 

    bool a_greater_equal = a>=b;
    printf("a greater equal b: %d\n",a_greater_equal); 

    bool a_smaller_equal = a<=b;
    printf("a greater equal b: %d\n",a_smaller_equal); 

    int c = 15;
    int d = 15;

    bool c_equal_d = c==d;
    printf("a greater equal b: %d\n",c_equal_d); 

    bool c_not_equal_d = c!=d;
    printf("a greater equal b: %d\n",c_not_equal_d); 

    // true - 1
    // false - 0



    return 0;
}