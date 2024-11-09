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
        int array[2 * n - 1];
        memset(array, 0, (2 * n - 1) * sizeof(int));
        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[2 * i]);
        }

        for (int j = 0; j < n - 1; j++)
        {

            if (array[2 * j + 2] < array[2 * j])
            {
                array[2 * j + 1] = array[2 * j + 2];
                counter++;
            }

            else
            {
                continue;
            }
        }

        printf("%d \n", n + counter);

        for (int k = 0; k < 2 * n - 1; k++)
        {

            if (array[k] != 0)
            {
                printf("%d ", array[k]);
            }

            else
            {
                continue;
            }
        }
    }

    return 0;
}