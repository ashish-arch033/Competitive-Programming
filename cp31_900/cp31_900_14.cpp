#include <iostream>
#include <stdint.h>
#include <cmath>
#define int long long

int32_t main()
{

    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;

        if (n % 2 == 1 || n == 2)
        {
            std::cout << -1 << std::endl;
        }

        else
        {

            int min;
            if (n % 6 == 0)
            {
                min = n / 6;
            }
            else
            {
                min = n / 6 + 1;
            }

            int max = n / 4;

            std::cout << min << " " << max << std::endl;
        }
    }
}