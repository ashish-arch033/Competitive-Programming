#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    signed int array[n];
    //memset(array, 0, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &array[i]);
        array[i] = abs(array[i]);
    }

    int min;
    min = array[0];

    for (int j = 0; j < n; j++)
    {

        

        if (array[j] < min)
        {
            min = array[j];
        }
    }

    printf("%d \n", min);
}