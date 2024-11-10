#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        int array[n + 2];
        array[0] = 0;

        for (int i = 0; i < n; i++) // taking array input
        {
            scanf("%d", &array[i + 1]);
        }

        array[n + 1] = x; 

        int diff[n + 1]; // difference array

        for (int j = 0; j < n + 1; j++)
        {
            diff[j] = array[j + 1] - array[j];
        }

        diff[n] = 2 * diff[n]; // double the last element

        int max = diff[0];

        for (int k = 0; k < n + 1; k++)
        {

            if (diff[k] > max)
            {
                max = diff[k];
            }
        }

        printf("%d \n", max);
    }
}