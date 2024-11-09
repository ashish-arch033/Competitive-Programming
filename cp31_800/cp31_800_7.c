#include <stdio.h>
#include <string.h>

void append(char *array, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        array[(*n) + i] = array[i];
    }
    *n = 2 * (*n);
    array[*n] = '\0';
}

int present(char *arrayA, char *arrayB)
{
    int Alen = strlen(arrayA);
    int Blen = strlen(arrayB);

    for (int i = 0; i <= Alen - Blen; i++)
    {
        int found = 1;

        for (int j = 0; j < Blen; j++)
        {
            if (arrayA[i + j] != arrayB[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {
        int n, m;
        int counter = 0;
        int ans = -1;
        char arrayX[256000];
        char arrayS[32];

        scanf("%d %d", &n, &m);
        scanf("%s", arrayX);
        scanf("%s", arrayS);

        if (present(arrayX, arrayS))
        {
            printf("0\n");
            continue;
        }

        while (strlen(arrayX) < m)
        {
            append(arrayX, &n);
            counter++;
        }

        for (int i = 0; i < 5; i++)
        {
            if (!present(arrayX, arrayS))
            {
                append(arrayX, &n);
                counter++;
            }
            else
            {
                ans = counter;
                break;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
