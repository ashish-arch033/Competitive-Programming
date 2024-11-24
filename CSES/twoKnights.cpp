#include <iostream>
#define int long long
#include <stdint.h>

int32_t main()
{

    int k;
    std::cin >> k;

    for (int i = 1; i < k + 1; i++)
    {
        int n = i * i;
        int num = (n * (n - 1)) / 2 - (4 * (i - 2) * (i - 1));
        std::cout << num << std::endl;
    }
}