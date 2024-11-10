#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {

        int n;
        scanf("%d", &n);
        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        if (n % 2 == 0)
        {

            int X = array[0];

            for (int i = 1; i < n; i++)
            {
                X = X ^ array[i];
            }

            if (X == 0)
            {
                printf("5 \n");
                continue;
            }

            else
            {
                printf("-1 \n");
                continue;
            }
        }

        if (n % 2 == 1)
        {

            int X = array[0];

            for (int i = 1; i < n; i++)
            {
                X = X ^ array[i];
            }

            printf("%d \n", X);
            continue;
        }
    }
}