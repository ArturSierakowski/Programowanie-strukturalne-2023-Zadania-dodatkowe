#include <stdio.h>
#include <stdlib.h>

void foo(double *wsk_n)
{
    *wsk_n *= *wsk_n;
}

int main()
{
    double n = 2.5;
    foo(&n);
    printf("%.2lf", n);

    return 0;
}
