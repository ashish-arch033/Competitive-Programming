#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {
        int n;
        int k;
        scanf("%d", &n);
        scanf("%d", &k);

        int ans = 0;

        int array[128];
        memset(array, 0, 128 * sizeof(int));

        for (int i = 0; i < n; i++) // array input
        {
            scanf("%d", &array[i]);
        }

        for (int i = 0; i < n; i++) // parent loop
        {

            int hash[128];
            int condition;
            memset(hash, 0, 128 * sizeof(int));

            for (int j = 0; j < n - i; j++)
            {

                hash[array[i + j]]++;

                condition = 1;

                for (int z = 0; z < 101; z++)
                {
                    if (hash[k] < hash[z])
                    {
                        condition = 0;
                        break;
                    }
                }

                if (condition)
                {
                    ans = 1;
                }
            }
        }

        if (ans)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }

        
    }

    return 0;
}