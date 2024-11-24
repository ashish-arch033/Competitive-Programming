#include <iostream>
#include <vector>
#include <stdint.h>
#include <algorithm>
#define int long long

int32_t main()
{

    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;

        std::vector<int> array(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }

        int zeroes = std::count(array.begin(), array.end(), 0);

        int pivot = 0;
        int maxPivot = 0;

        for(int i = 0; i < n; i ++) {

            if(array[i] != 0) {
                pivot++;
                maxPivot = std::max(pivot, maxPivot);
            }

            else {
                pivot = 0;
            }
        }
        
        if (zeroes == n)
        {
            std::cout << 0 << std::endl;
            continue;
        }

        if (zeroes == 0)
        {
            std::cout << 1 << std::endl;
            continue;
        }

        if ((maxPivot == n-zeroes)) {
            std::cout << 1 << std::endl;
        }

        else
        {
            std::cout << 2 << std::endl;
        }
    }
}