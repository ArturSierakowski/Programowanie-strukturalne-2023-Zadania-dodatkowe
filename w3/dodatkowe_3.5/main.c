#include <stdio.h>
#include <stdlib.h>

void foo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        int suma = 0;
        while (tmp > 0)
        {
            suma += tmp % 10;
            tmp /= 10;
        }
        if (i % suma == 0)
            printf("%d ", i);
    }
}

int main()
{
    int n = 100;
    foo(n);

    return 0;
}
