#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {

        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (d < b)
        {
            printf("-1\n");
            continue;
        }
        if (d - b < c - a)
        {
            printf("-1\n");
            continue;
        }
        else {
            int K = 2*(d-b) - c + a;
            printf("%d\n",K );
        }
    }
}