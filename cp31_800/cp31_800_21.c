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

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        int pivot = 0;
        int max_pivot = 0;

        for (int i = 0; i < n; i++)
        {

            if (array[i] == 0)
            {
                pivot++;

                if (pivot > max_pivot)
                {
                    max_pivot = pivot;
                }
            }

            else
            {
                pivot = 0;
            }
        }

        printf("%d\n", max_pivot);
    }
}