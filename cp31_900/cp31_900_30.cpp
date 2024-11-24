#include <iostream>
#include <stdint.h>
#define int long long

int32_t main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        std::string str;
        std::cin >> str;

        int zero = 0;
        int one = 0;

        for (char i : str)
        {
            if (i == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (std::min(zero, one) % 2 == 1)
        {
            std::cout << "DA" << std::endl;
        }

        else
        {
            std::cout << "NET" << std::endl;
        }
    }
}