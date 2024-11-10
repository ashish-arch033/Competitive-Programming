#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

        int ans = 0;

        for(int i = 0; i<n; i++) {

            for(int j = 0; j<n ;j++) {

                if(i==j) {
                    continue;
                }

                else {
                    if(gcd(array[i],array[j]) <= 2) {
                        ans = 1;
                    }
                }
            }
        }

        if(ans) {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
