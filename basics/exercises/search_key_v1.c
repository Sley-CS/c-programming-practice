// this function looks for a particular element inside an array and return true if found, false if not. it uses a pointer to walk through the array.

bool search (const int a[], int n, int key)
{
    int *p;
    for (p = a; p < a + n; p++)
        (*p == key) ? return true : return false;
}
