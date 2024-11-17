#include <iostream>
#include <vector>
#include <stdint.h>
#define int long long int

int32_t main()
{
    int n;
    std::cin >> n;

    std::vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i + 1] < array[i])
        {
            count += abs(array[i + 1] - array[i]);
            array[i + 1] = array[i];
        }
    }

    std::cout << count;
}