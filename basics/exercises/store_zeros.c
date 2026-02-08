// this functions store zeros in an array. pointer is used to walk through the array.

void store_zeros (int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}
