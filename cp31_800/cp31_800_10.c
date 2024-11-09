#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int _t = 0; _t < t; _t++)
    {

        char array[10][10];
        float hits[100][2];
        memset(&hits[0][0], 0, 100 * 2 * sizeof(int));
        int count = 0;
        int points = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                scanf(" %c", &array[i][j]);

                if (array[i][j] == 'X')
                {
                    hits[count][0] = (i + 1);
                    hits[count][1] = (j + 1);
                    count++;
                }
            }
        }

        for (int k = 0; k < count; k++)
        {
            float a = ceil(abs(hits[k][0] - 5.5));
            float b = ceil(abs(hits[k][1] - 5.5));

            if (a > b)
            {
                points = points + (int)(5 - a);
            }
            else
            {
                points = points + (int)(5 - b);
            }
        }

        printf("%d\n", points);
    }
    return 0;
}