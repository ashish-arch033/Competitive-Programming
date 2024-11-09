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

        int odd = 0;

        for (int j = 0; j < n; j++)
        {
            if (array[j] % 2 == 1)
            {
                odd++;
            }
        }

        if (odd % 2 == 1)
        {
            printf("NO \n");
        }

        else
        {
            printf("YES \n");
        }
    }
}