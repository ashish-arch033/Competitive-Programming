#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int _t = 0; _t < t; _t++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        char s[n+1];
        scanf("%s", s);

        char t[m+1];
        scanf("%s", t);

        int z1 = 0;
        int o1 = 0;
        int sgood = 1;

        for(int i = 0; i<n-1; i++) {
            if(s[i] == s[i+1] && s[i] == '0') {
                z1++;
            }
            if(s[i] == s[i+1] && s[i] == '1') {
                o1++;
            }
        }

        if(z1>0 || o1>0) {
            sgood = 0;
        }

        int z2 = 0;
        int o2 = 0;
        int tgood = 1;

        for(int j = 0; j<m-1; j++) {
            if(t[j] == t[j+1] && t[j] == '0') {
                z2++;
            }
            if(t[j] == t[j+1] && t[j] == '1') {
                o2++;
            }
        }

        if(z2>0 || o2>0) {
            tgood = 0;
        }

        if(sgood) {
            printf("Yes\n");
            continue;
        }

        if(z1>0 && o1>0) {
            printf("No\n");
            continue;
        }

        if(z1>0 && tgood && t[0] == '1' && t[m-1] == '1') {
            printf("Yes\n");
            continue;
        }

        if(o1>0 && tgood && t[0] == '0' && t[m-1] == '0') {
            printf("Yes\n");
            continue;
        }
            printf("No\n");

    }

    return 0;
}
