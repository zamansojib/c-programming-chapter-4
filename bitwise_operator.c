#include<stdio.h>
int main(void){
   
//    unsigned char a = 12;
//    unsigned char b = 25;
//    unsigned char c = a & b;
//    printf("AND Operation - %d\n",c); 
   
//    unsigned char d = a|b;
//    printf("OR Operation - %d\n",d); 

//    unsigned char e = a^b;
//    printf("XOR Operation - %d\n",e); 

//    unsigned char f = ~a;
//    printf("XOR Operation - %d\n",f); 
  
    
    //   unsigned char rs1 = 250>>1;
    //   unsigned char rs2 = 250>>2;
    //   unsigned char rs3 = 250>>3;
    //   printf("right shift Operation 1 - %d\n",rs1); 
    //   printf("right shift Operation 2 - %d\n",rs2); 
    //   printf("right shift Operation 3 - %d\n",rs3); 

      unsigned char ls1 = 250<<1;
      unsigned char ls2 = 250<<2;
      unsigned char ls3 = 250<<3;
      printf("left shift Operation 1 - %d\n",ls1); 
      printf("left shift Operation 2 - %d\n",ls2); 
      printf("left shift Operation 3 - %d\n",ls3); 
      

    return 0;
}

// bitwise operator

// And Operator
// 12 - 0 0 0 0 1 1 0 0
// 25 - 0 0 0 1 1 0 0 1
//  & - 0 0 0 0 1 0 0 0 

// Or Operator
// 12 - 0 0 0 0 1 1 0 0
// 25 - 0 0 0 1 1 0 0 1
// |  - 0 0 0 1 1 1 0 1

// XOR Operator
// 12 - 0 0 0 0 1 1 0 0
// 25 - 0 0 0 1 1 0 0 1
// ^  - 0 0 0 1 0 1 0 1

// Complement operator
// 12 - 0 0 0 0 1 1 0 0
// ~  - 1 1 1 1 0 0 1 1


// 0 1 1 1 1 1 0 1 
// 0 0 1 1 1 1 1 0 
// 0 0 0 1 1 1 1 1 

// right shift operator
// 250 - 1 1 1 1 1 0 1 0
// >>1 - 0 1 1 1 1 1 0 1 
// >>2 - 0 0 1 1 1 1 1 0
// >>3 - 0 0 0 1 1 1 1 1

//   1 1 1 1 0 1 0 0
//   1 1 1 0 1 0 0 0
//   1 1 0 1 0 0 0 0

// left shift operator
// 250 - 1 1 1 1 1 0 1 0
// <<1 - 1 1 1 1 0 1 0 0
// <<2 - 1 1 1 0 1 0 0 0
// <<3 - 1 1 0 1 0 0 0 0