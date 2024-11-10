#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i< n; i++) {
        scanf("%d", &array[i]);

        if(array[i] % 2  == 1) {
            array[i] = 1;
        }
        else {
            array[i] = 0;
        }
    }

    int ones = 0;
    int zeroes = 0;

    for (int i = 0; i<n; i++) {
        if (array[i] == 1) {
            ones++;
        }
        else {
            zeroes++;
        }
    }
    
    if(ones == 1) {
        for(int i = 0; i<n ; i++) {
            if(array[i] == 1) {
                printf("%d", i+1);
                break;
            }
        }
    }

    else {
        for(int i = 0; i<n; i++) {
            if(array[i] == 0) {
                printf("%d", i+1);
                break;
            }
        }
    }

}