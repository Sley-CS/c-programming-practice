// this functions calculate the inner product of two array of length n. 
// It returns a[0] * b[0] + a[1] * b[1] + a[n-1] * b[n-1]. It uses pointer arithmetic

double inner_product (const double *a, const double *b, int n)
{
    int *p, *q, sum = 0;
    sum = 0.0;
    for (p = a, q = b; (p < a + n) && (q < b + n); p++, q++)
        sum += (*p) * (*q);
    return sum;
}
