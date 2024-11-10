#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

        int r = 0; // ones
        int p = 0; // minus ones

        for (int i = 0; i < n; i++)
        {
            if (array[i] == 1)
            {
                r++;
            }
            else
            {
                p++;
            }
        }

        // check if already good
        if (r >= p && p % 2 == 0)
        {
            printf("0\n");
            continue;
        }

        else if ( r>=p && p % 2 == 1) {
            printf("1\n");
            continue;
        }

        if (p > r)
        {
            int switches = (int)(ceil(abs(p - r) / 2.0));

            if ((p - switches) % 2 == 1)
            {
                printf("%d\n", switches + 1);
                continue;
            }

            else
            {
                printf("%d\n", switches);
                continue;
            }
        }

    }
}