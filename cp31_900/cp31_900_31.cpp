#include <iostream>
#define int long long

int32_t main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        if (n == 1)
        {
            std::cout << 0 << std::endl;
            continue;
        }

        if (n % 3 != 0)
        {
            std::cout << -1 << std::endl;
            continue;
        }

        int Two = 0;
        int Three = 0;

        while (n % 2 == 0)
        {
            n /= 2;
            Two++;
        }

        while (n % 3 == 0)
        {
            n /= 3;
            Three++;
        }

        if (n == 1 && Two <= Three)
        {
            std::cout << 2 * Three - Two << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}
