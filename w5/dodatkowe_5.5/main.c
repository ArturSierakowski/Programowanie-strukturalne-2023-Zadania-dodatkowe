#include <stdio.h>
#include <stdlib.h>

int foo1(int n)
{
    return n;
}

int foo2(int n)
{
    return 3 * n;
}

int funkcja(int (*f1)(int), int (*f2)(int), int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (f1(n) * f2(n) % 3 != 0)
            return 0;
    }
    return 1;
}

int main()
{
    if (funkcja(&foo1, &foo2, 5))
        printf("iloczyn podzielny przez 3\n");
    else
        printf("iloczyn niepodzielny przez 3\n");

    return 0;
}
