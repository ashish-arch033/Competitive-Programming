#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

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

        int check = array[0];
        int good = 0;

        for (int i = 0; i < n; i++)
        {
            if (array[i] != check)
            {
                good = 1;
            }
        }

        if (good)
        {

            bubbleSort(array, n);
            printf("YES\n");

            printf("%d ", array[0]);
            printf("%d ", array[n - 1]);

                        for (int i = 1; i < n - 1; i++)
            {
                printf("%d ", array[i]);
            }
            printf("\n");
        }

        else
        {
            printf("NO\n");
            continue;
        }
    }
}