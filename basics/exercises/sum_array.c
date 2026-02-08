// this function sums the numbers inside an array using pointer arithmetic.

int sum_array (const int *a, int n)
{
    int sum = 0, *p = a;
    while (p < a + n)
        sum += *p++;
    return sum;
}
