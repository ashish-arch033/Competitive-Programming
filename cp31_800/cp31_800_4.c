#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    int n;

    for (int _t = 0; _t < t; _t++)
    {
        scanf("%d", &n);

        if (n % 3 == 0)
        {
            printf("Second \n");
        }
        else
        {
            printf("First \n");
        }
    }

    return 0;
}