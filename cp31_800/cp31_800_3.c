#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {

        int n;
        scanf("%d", &n);
        char inputString[128];
        scanf("%s", &inputString);

        int counter = 0;
        int pivot = 0;

        for (int i = 0; i < n; i++)
        {

            if (inputString[i] == '.')
            {
                counter++;
            }
        }

        for (int j = 1; j < n; j++)
        {
            if (inputString[j] == '.' && inputString[j - 1] == '.' && inputString[j + 1] == '.')
            {
                pivot = 1;
                break;
            }
        }

        if (pivot == 1)
        {
            printf("2 \n");
        }

        else
        {
            printf("%d \n", counter);
        }
    }

    return 0;
}