#include <iostream>
#include <stdint.h>
#include <cmath>
#define int long long

int32_t main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        int a, b;
        std::cin >> a >> b;

        if ((abs(2 * b - a) % 3 == 0) && (abs(a - b)) % 2 == 0)
        {
            std::cout << "YES" << std::endl;
        }

        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}