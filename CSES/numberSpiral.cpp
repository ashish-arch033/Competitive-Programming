#include <iostream>
#include <stdint.h>
#define int long long

int32_t main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        int y, x;
        std::cin >> y >> x;

        int m = std::max(x, y) - 1;
        int A = m * m;
        int result = 0;

        if (m % 2 == 0)
        {

            if (x > y)
            {
                result = A + 2 * m + 2 - y;
            }

            if (y > x)
            {
                result = A + x;
            }

            if(x==y)
            {
                result = A + m + 1;
            }
        }

        else
        {
            if (x > y)
            {
                result = A + y;
            }

            if (y > x)
            {
                result = A + 2 * m + 2 - x;
            }

            if(x==y)
            {
                result = A + m + 1;
            }
        }

        std::cout << result << std::endl;
    }
}