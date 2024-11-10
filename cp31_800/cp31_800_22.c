#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {

        long long int n, k;
        scanf("%d %d", &n, &k);

        if (n % 2 == 0 || k == 1)
        {
            printf("YES\n");
            continue;
        }

        if (n % 2 == 1 && k % 2 == 0)
        {
            printf("NO\n");
            continue;
        }

        if (n % 2 == 1 && k % 2 == 1)
        {
            printf("YES\n");
        }
    }
}