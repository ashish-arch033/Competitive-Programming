#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        if (n == a && n == b)
        {
            printf("Yes\n");
            continue;
        }

        if (n - 2 >= a + b)
        {
            printf("Yes\n");
            continue;
        }

        else
        {
            printf("No\n");
            continue;
        }
    }
}