// this function uses pointer arithmetic to find the two largest integers in an array.

void two_largest (int a[], int n, int *largest, int *s_largest)
{
    int *p;
    *largest = *s_largest = a[0];
    for (p = a; p < a + n; p++)
        if (*p > *largest) {
            *s_largest = *largest;
            *largest = *p;
        }
        else if (*p > *s_largest)
            *s_largest = *p;
    return;
}
