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
            if(array[i]%2 == 0) {
                array[i] = 0;
            }
            else {
                array[i] = 1;
            }
        }

        int pivot = 0;
        int id = array[0];

        for(int i = 1; i<n ; i++) {

            if(array[i] == id) {
                pivot++;
            }
            else {
                id = array[i];
            }

        }

        printf("%d\n", pivot);

    }
}
