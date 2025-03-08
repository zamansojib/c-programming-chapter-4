#include<stdio.h>
int main(void){

   int a = 20;
   int b = 25;

   int c = a>b ? 1 : 0;
   printf("result : %d\n",c);

    int yr = 2024;

    (yr%4==0) ? (yr%100!=0? printf("The year %d is a leap year",yr) : (yr%400==0 ? printf("The year %d is a leap year",yr) : printf("The year %d is not a leap year",yr)))
             : printf("The year %d is not a leap year",yr);

      short bigger = 10;
      short smaller = 8;
      bigger>smaller? printf("\nHello this zaman") : printf("\nHello this is wick");


    // (yr%4 == 0 ) ? (yr%100 != 0 ? printf("The year %d is a leap year",yr) : (yr%400==0? printf("The year %d is a leap year",yr):printf("The year %d is not a leap year",yr))):printf("The year %d is not a leap year",yr);

    return 0;
}