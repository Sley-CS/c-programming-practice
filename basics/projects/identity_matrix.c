// this pogram produces an identity matrix ,assuming a squared matrix i.e cols = rows. it uses pointer arithmetic

#include<stdio.h>

#define N 100

int main(void){

  double IDENT_MATRIX[N][N] = {0}, (*P)[N], i;
        i = 0;
          for (P = IDENT_MATRIX; P < IDENT_MATRIX + N; P++) {
              (*P)[i++] = 1.0;
          }  
// int (*P)[N] is a pointer to an array of N elements.
