#include <iostream>
#include <vector>
#include <stdint.h>
#define int long long int

int32_t main()
{

    int n;
    std::cin >> n;

    std::vector<int> array(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> array[i];
    }

    int arraySum = 0;

    for (int i = 0; i < int32_t(array.size()); i++)
    {
        arraySum += array[i];
    }

    int sum = (int)(n * (n + 1) * 0.5);

    std::cout << sum - arraySum << std::endl;

    return 0;
}