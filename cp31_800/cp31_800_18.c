#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {

        int n, k;
        scanf("%d %d", &n, &k);

        if (n % k != 0)
        {
            printf("1\n");
            printf("%d \n", n);
        }

        else
        {
            printf("2\n");
            printf("%d %d \n", n - 1, 1);
        }
    }
}