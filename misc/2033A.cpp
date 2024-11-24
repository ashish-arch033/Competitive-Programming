#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;
    
    while(t--) {

    int n;
    std::cin >> n;

    int count = 0;
    int i = 1;

    while (std::abs(count) <= std::abs(n))
    {
        if (i % 2 == 1)
        {
            count -= (2 * i - 1);
        }

        else
        {
            count += (2 * i - 1);
        }

        i++;
    }

    if (i % 2 == 0)
    {
        std::cout << "Sakurako" << std::endl;
    }
    else
    {
        std::cout << "Kosuke" << std::endl;
    }

    }

}