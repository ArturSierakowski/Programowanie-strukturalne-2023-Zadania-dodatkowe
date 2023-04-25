#include <stdio.h>
#include <stdlib.h>

int szereg(int n, float x)
{
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        float tmp = x;
        for (int j = 1; j < i; j++)
        {
            tmp *= x;
        }
        suma += tmp + i;
    }
    return suma;
}

int main()
{
    int n = 2;
    float x = 2;

    float suma = szereg(n, x);
    printf("%f", suma);

    return 0;
}
