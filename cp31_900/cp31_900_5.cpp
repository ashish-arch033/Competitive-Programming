#include <iostream>
#include <vector>

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

        int same = 1;

        for (int i = 0; i < n; i++)
        {
            if (array[i] != array[0])
            {
                same = 0;
                break;
            }
        }

        if (same)
        {

            if (n % 2 == 0)
            {
                std::cout << 1 << std::endl;
                std::cout << 1 << " " << n << std::endl;
            }

            else
            {
                std::cout << 3 << std::endl;
                std::cout << 1 << " " << n - 1 << std::endl;
                std::cout << n - 1 << " " << n << std::endl;
                std::cout << n - 1 << " " << n << std::endl;
            }
        }

        else
        {
            if (n % 2 == 0)
            {
                std::cout << 2 << std::endl;
                std::cout << 1 << " " << n << std::endl;
                std::cout << 1 << " " << n << std::endl;
            }

            else
            {
                std::cout << 4 << std::endl;
                std::cout << 1 << " " << n << std::endl;
                std::cout << 1 << " " << n - 1 << std::endl;
                std::cout << n - 1 << " " << n << std::endl;
                std::cout << n - 1 << " " << n << std::endl;
            }
        }
    }

    return 0;
}