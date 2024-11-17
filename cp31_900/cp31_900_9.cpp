#include <iostream>
#include <vector>
#include <numeric>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
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

        std::vector<int> __array(n);

        for (int i = 0; i < n; i++)
        {
            __array[i] = abs(array[i] - (i + 1));
        }

        int result = __array[0];

        for (int i = 1; i < __array.size(); i++)
        {
            result = gcd(result, __array[i]);
            if (result == 1)
            {
                break;
            }
        }

        std::cout << result << std::endl;
    }

    return 0;
}