#include <stdio.h>
#include <math.h>

int isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int _i = 0; _i < t; _i++)
    {
        int n;
        scanf("%d", &n);

        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        if (!isSorted(array, n))
        {
            printf("0\n");
            continue;
        }

        int min = array[1] - array[0];
        for (int j = 1; j < n - 1; j++)
        {
            int diff = array[j + 1] - array[j];
            if (diff < min)
            {
                min = diff;
            }
        }

        if (min == 2)
        {
            printf("2\n");
        }
        else if (min > 2)
        {
            int R = (int)ceil((min + 1) / 2.0);
            printf("%d\n", R);
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
