#include <stdio.h>
#include <stdlib.h>

int foo1(int n)
{
    return 2 * n;
}

int foo2(int n)
{
    return n + 1;
}

int funkcja(int (*foo1)(int), int (*foo2)(int), int n)
{
    return foo1(n) * foo2(n);
}

int main()
{
    printf("%d\n", funkcja(&foo1, &foo2, 1));
    printf("%d\n", funkcja(&foo1, &foo2, 2));
    return 0;
}
