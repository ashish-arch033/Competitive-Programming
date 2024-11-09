#include <stdio.h>

int isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return 0;
    }
    return 1;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {
        int n;
        int sorted = 0;
        scanf("%d", &n);

        int arrayA[16];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arrayA[i]);
        }

        while (sorted == 0)
        {
            int Swapped = 0;

            for (int i = 1; i < n - 1; i++)
            {
                if (arrayA[i] > arrayA[i - 1] && arrayA[i] > arrayA[i + 1])
                {
                    swap(&arrayA[i], &arrayA[i + 1]);
                    Swapped = 1;
                }
            }

            if (isSorted(arrayA, n))
            {
                sorted = 1;
            }
            else if (!Swapped)
            {
                sorted = 2;
            }
        }

        if (sorted == 1)
        {
            printf("YES \n");
        }
        else if (sorted == 2)
        {
            printf("NO \n");
        }
    }

    return 0;
}
