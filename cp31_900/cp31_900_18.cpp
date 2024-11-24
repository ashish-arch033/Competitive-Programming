#include <iostream>
#include <stdint.h>
#include <vector>
#define int long long
//hint used

int32_t main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        int a, b, c;
        std::cin >> a >> b >> c;

        int A, B, C;

        A = 2*b - c;

        if (A >= a && A != 0 && A % a == 0)
        {
            std::cout << "YES" << std::endl;
            continue;
        }

        B = a + (c - a) / 2;

        if (B >= b && (c-a)%2 == 0 && B != 0 && B % b == 0)
        {
            std::cout << "YES" << std::endl;
            continue;
        }

        C = 2 * b - a;

        if (C >= c && C != 0 && C % c == 0)
        {
            std::cout << "YES" << std::endl;
            continue;
        }

        std::cout << "NO" << std::endl;
    }
}