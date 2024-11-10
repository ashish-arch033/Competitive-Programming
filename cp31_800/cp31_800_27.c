#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {
        int n;
        scanf("%d", &n);
        int array[n];

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] == 2)
            {
                count++;
            }
        }

        if (count % 2 == 1)
        {
            printf("-1\n");
            continue;
        }

        int samuel = count / 2;
        int tourist = 0;

        for (int i = 0; i < n; i++)
        {
            if (array[i] == 2)
            {
                tourist++;
            }

            if (tourist == samuel)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}
