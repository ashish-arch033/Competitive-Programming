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

        char array[n];
        scanf("%s", array);
        
        int count = 0;

        for (int i = 0; i < n/2; i++)
        {
            if (array[i] != array[n - i - 1])
            {
                count++;
            }
            if (array[i] == array[n - i - 1] )
            {
                break;
            }
        }

        printf("%d\n", n - 2 * count);
    }
}