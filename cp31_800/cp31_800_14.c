#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int _t = 0; _t < t; _t++) {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (c%2 == 0) {
            //Anna turn
            if(a<=b) {
                printf("Second \n");
            }
            else {
                printf("First \n");
            }
        }

        else {
            //Katie turn
            if(b<=a) {
                printf("First \n");
            }
            else {
                printf("Second \n");
            }
        }
    }
}