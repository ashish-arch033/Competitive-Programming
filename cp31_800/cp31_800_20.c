#include <stdio.h>

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

        int min = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] < min)
            {
                min = array[i];
            }
        }

        int max = min + n - 1;
        
        for(int i = 0; i<n; i++) {
            printf("%d ", max+min-array[i]);
        }
        printf("\n");
    }
}