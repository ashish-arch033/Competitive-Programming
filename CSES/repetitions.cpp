#include <iostream>
#include <vector>
#include <stdint.h>
#define int long long int

int32_t main()
{

    std::string array;
    std::cin >> array;

    char id = array[0];
    int pivot = 0;
    int maxPivot = 0;

    for (char x : array)
    {

        if (x == id)
        {
            pivot++;
            maxPivot = std::max(maxPivot, pivot);
        }

        else
        {
            id = x;
            pivot = 1;
        }
    }

    std::max(maxPivot, pivot);
    std::cout << maxPivot;

    return 0;
}