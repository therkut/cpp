#include <math.h>
#include <stdio.h>

int main()
{
    int x = 5;
    const int *const p = &x;

    (*p)++;
    p++;

    return 0;
}