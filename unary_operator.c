#include<stdio.h>
int main(void){


    // Unary Operator
    // Unary operator used to one operand
    // Such that Increment and Decrement.
    // Increment or decrement Used to only increased or decreased 1

    // int a = 5;
    // a = a+5;
    // a += 5;

    // // post Increment
    // a++;
    // printf("Post Increment value - %d\n",a);
    // //  pre increment
    // ++a;
    // printf("Pre Increment value - %d\n",a);

    // int result = a + a-- + --a;
    // printf("value of a : %d\n",a);
    // printf("total result : %d\n",result);

    // int x = 5;
    // int y = 5;

    // int prefix = ++x;
    // printf("Prefix Increment: %d\n", prefix);
    
    // int suffix = y++;
    // printf("Prefix Increment: %d\n", suffix);
    
    // int p = 8;
    // int q = 8;

    // int Prefix = --p;
    // printf("Prefix Decrement: %d\n", Prefix);

    // int Suffix = q++;
    // printf("Suffix Decrement: %d\n", Suffix);

    // int m = 10;
    // int ps = m++;
    // printf("This result is Post Increment - %d\n",ps);
  
    // int s = 15;
    // int qs = ++s;
    // printf("This result is Pre Increment - %d\n",qs);

     int t = 10;
     ++t;
     printf("this simple result is : %d\n",t);
     
    int a, b, c;

    a = 10;   // a = 10
    b = ++a;  // a=11, b=11
    c = a++;  // a=12, c=11

    printf("a=%d, b=%d, c=%d\n+", a, b, c);

    int x,y,z;
    x = 10;
    y = --x;
    z = x--;
    printf("x=%d, y=%d, z=%d", x, y, z);

    return 0;
}