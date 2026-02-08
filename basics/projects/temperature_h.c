//this little program uses a loop to print the highest value of a temperature array.

#include<stdio.h>
#define DAYS 7
#define HOURS 24

//functions declaration
    double find_largest (double a[], int n);

int main (void) {

    double temperatures[DAYS][HOURS], i, j;
    
      // Printing the highest temp. of a row
      for (i = 0; i < DAYS; i++)
        printf("%3f\n", find_largest(temperatures[i], HOURS));
    return 0;
}

// functions definition
double find_largest (double a[], int n) {
    double *p, largest;
    largest = *a;
    for (p = a + 1; p < a + n; p++)
        if (*p > largest)
            largest = *p;
    return largest;
}
