#include <stdio.h>

int main()
{

    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {

        int n, k;
        int array[128];

        scanf("%d %d", &n, &k);

        for (int _n = 0; _n < n; _n++)
        {
            scanf("%d", &array[_n]);
        }

        if (k > 1)
        {
            printf("YES \n");
        }

        if (k == 1)
        {

            if ((Sorted(array, n)) == 1)
            {
                printf("YES \n");
            }

            else
            {
                printf("NO \n");
            }
        }
    }

    return 0;
}

int Sorted(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return 0;
    }

    return 1;
}