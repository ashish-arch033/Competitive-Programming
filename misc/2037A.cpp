#include <iostream>
#include <vector>
#include <cmath>

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        int n;
        std::cin >> n;
        std::vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }

        std::vector<int> hash(1000, 0);
        for (int i = 0; i < n; i++)
        {
            hash[array[i]]++;
        }

        int count = 0;

        for (int i = 0; i < hash.size(); i++)
        {

            count += hash[i] / 2;
        }

        std::cout << count << std::endl;
    }
}