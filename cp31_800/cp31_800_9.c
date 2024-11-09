#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {

        int n;
        scanf("%d", &n);

        signed int array[128];
        memset(array, 0, 128 * sizeof(int));

        int sum = 0;

        for (int i = 0; i < n-1; i++)
        {
            scanf("%d", &array[i]);
        }

        for (int j = 0; j < n-1; j++)
        {
            sum = sum + array[j];
        }

        printf("%d \n", -sum);
    }

    return 0;
}