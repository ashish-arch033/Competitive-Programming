#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {

        int n, k, x;
        scanf("%d %d %d", &n, &k, &x);

        if (x != 1)
        {
            // always possible

            printf("Yes\n");
            printf("%d\n", n);

            for (int i = 0; i < n; i++)
            {
                printf("1 ");
            }

            printf("\n");
            continue;
        }

        if (k == 1 && x == 1)
        {
            // no numbers available

            printf("No\n");
            continue;
        }

        if (k == 2 && x == 1)
        {

            if (n % 2 == 0) // 2s can be used if even
            {

                printf("Yes\n");
                printf("%d \n", n / 2);

                for (int i = 0; i < n / 2; i++)
                {
                    printf("2 ");
                }

                printf("\n");
                continue;
            }

            else // 2s cannot be used if odd
            {
                printf("No\n");
            }
        }

        if (k > 2 && x == 1)
        {
            if (n % 2 == 0)
            {
                printf("Yes\n");
                printf("%d \n", n / 2);

                for (int i = 0; i < n / 2; i++)
                {
                    printf("2 ");
                    printf("\n");
                }
                continue;
            }

            else
            {
                printf("Yes \n");
                int R = (n - 3) / 2;
                printf("%d\n", R + 1);

                for (int i = 0; i < R; i++)
                {
                    printf("2 ");
                    printf("\n");
                }
                printf("3 ");
                printf("\n");
                continue;
            }
        }
    }
}