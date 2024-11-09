#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

        int condition = 1;
        int u1 = array[0];
        int u2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (array[i] != u1)
            {
                u2 = array[i];
                break;
            }
        }

        if (u2 == -1)
        {
            printf("YES \n");
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if ((array[i] != u1) && (array[i] != u2))
            {
                condition = 0;
                break;
            }
        }

        int f1 = 0;
        int f2 = 0;

        if (condition)
        {
            for (int i = 0; i < n; i++)
            {
                if (array[i] == u1)
                {
                    f1++;
                }
                else
                {
                    f2++;
                }
            }

            if (n % 2 == 0)
            {
                if (f1 == f2)
                {
                    printf("YES \n");
                }

                else
                {
                    printf("NO \n");
                }
            }

            if (n % 2 == 1)
            {
                if (f1 == (n + 1) / 2 || f2 == (n + 1) / 2)
                {
                    printf("YES \n");
                }
                else
                {
                    printf("NO \n");
                }
            }
        }

        if (!condition)
        {
            printf("NO \n");
        }
    }
}