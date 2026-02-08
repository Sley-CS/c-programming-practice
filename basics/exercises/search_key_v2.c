
// this improved version of the search_key function walks through an array to find a matching element and return true or false if found. 

bool search (const int a[], int n, int key)
{
    int match = 0, *p;
    for (p = a; p < a + n; p++)
        if (*p == key)
            match++;
    match > 0 ? return true : return false;
}
