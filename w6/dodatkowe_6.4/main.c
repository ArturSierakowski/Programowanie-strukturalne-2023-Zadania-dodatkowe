#include <stdio.h>
#include <stdlib.h>

void rotate_array(int *tab, int n, int k)
{
    int aux[n];
    for (int i = 0; i < n; i++)
    {
        aux[i] = tab[(i + k) % n];
        printf("%d ", aux[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {2, -3, 4, -1, 6, 7, 11};
    rotate_array(tab, 7, 3);
    return 0;
}
