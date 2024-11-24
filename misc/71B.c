#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k, t;
    scanf("%d %d %d", &n, &k, &t);

    float box = floor(n * t * 0.01);
    float frac = n * t * 0.01 - box;
    float num = frac * 100;

    float fill = floor(num * k * 0.01);

    int _box = (int)box;
    int _fill = (int)fill;

    if (t == 100)
    {

        for (int i = 0; i < n; i++)
        {
            printf("%d ", k);
        }

    }

    else
    {
        for (int i = 0; i < _box; i++)
        {
            printf("%d ", k);
        }

        printf("%d ", _fill);

        for (int j = 0; j < n - _box - 1; j++)
        {
            printf("0 ");
        }
    }

    return 0;
}