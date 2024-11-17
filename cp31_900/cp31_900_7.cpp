#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    int T;
    std::cin >> T;
    while (T--)
    {

        long int n, k;
        std::cin >> n >> k;

        std::vector<long int> array(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }

        std::sort(array.begin(), array.end());

        int pivot = 0;
        int maxPivot = 0;

        for (int i = 0; i < n-1; i++)
        {

            if (array[i + 1] - array[i] <= k)
            {
                pivot++;
            }

            else
            {
                maxPivot = std::max(pivot, maxPivot);
                pivot = 0;
            }
        }

        maxPivot = std::max(pivot, maxPivot);
        std::cout << n - maxPivot -1 << std::endl;
    }

    return 0;
}