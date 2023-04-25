#include <stdio.h>
#include <stdlib.h>

float foo1(int n)
{
    return 2.5 * n;
}

float foo2(int n)
{
    return 1.2 * n;
}

int funkcja(float (*f1)(int), float (*f2)(int), int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (f1(n) - f2(n) > 10)
            return 0;
    }
    return 1;
}

int main()
{
    printf("%d\n", funkcja(&foo1, &foo2, 7));
    printf("%d\n", funkcja(&foo1, &foo2, 8));
    return 0;
}
