#include <iostream>
#include <vector>
#include <set>

int main()
{

    int T;
    std::cin >> T;
    while (T--)
    {

        int n, k;
        std::cin >> n >> k;

        std::string str;
        std::cin >> str;

        std::vector<int> val(26, 0);

        for (char c : str)
        {
            val[c - 97]++;
        }

        int odds = 0;

        for (int i = 0; i < val.size(); i++)
        {
            if (val[i] % 2 == 1)
            {
                odds++;
            }
        }

        if (k >= odds - 1)
        {
            std::cout << "YES" << std::endl;
            continue;
        }

        else
        {
            std::cout << "NO" << std::endl;
            continue;
        }
    }
}