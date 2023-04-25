#include <stdio.h>
#include <stdlib.h>

int foo1(int n)
{
    return 2 * n;
}

int foo2(int n)
{
    return 2 * n + 1;
}

int funkcja(int (*f1)(int), int (*f2)(int), int n)
{
    for (int i = 0; i <= n; i++)
    {
        if ((f1(i) + f2(i)) % 2 != 0)
            return 0;
    }
    return 1;
}

int main()
{
    printf("%d\n", funkcja(&foo1, &foo2, 5));   // parzysta + nieparzysta
    printf("%d\n", funkcja(&foo2, &foo2, 4));   // nieparzysta + nieparzysta
    printf("%d\n", funkcja(&foo1, &foo1, 3));   // parzysta + parzysta
    return 0;
}
