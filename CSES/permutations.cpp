#include <iostream>
#include <vector>
#include <stdint.h>
#define int long long int

int32_t main()
{
    int n;
    std::cin >> n;

    if (n == 1)
    {
        std::cout << "1";
    }

    if (n == 2 || n == 3)
    {
        std::cout << "NO SOLUTION";
    }

    if(n>3)
    {
        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 0) {
                std::cout << i << " ";
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 1) {
                std::cout << i << " ";
            }
        }

    }
}