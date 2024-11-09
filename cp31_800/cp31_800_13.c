#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        int array[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        int min = array[0];
        int count = 0;

        for (int m = 0; m < n; m++)
        {
            if (array[m] < min)
            {
                min = array[m];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (array[j] == min)
            {
                count++;
            }
        }

        if (count == n)
        {
            printf("-1\n");
            continue;
        }

        else
        {
            printf("%d %d \n", count, n - count);

            for (int x = 0; x < n; x++)
            {
                if (array[x] == min)
                {
                    printf("%d ", array[x]);
                }
            }
            printf("\n");
            for (int y = 0; y < n; y++)
            {
                if (array[y] != min)
                {
                    printf("%d ", array[y]);
                }
            }
        }
    }
}