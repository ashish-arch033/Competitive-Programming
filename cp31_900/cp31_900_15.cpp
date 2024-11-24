#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>
#define int long long
//hint used

int32_t main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }

        int count = 0;
        int condition = 1;

        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1] && a[i] > 0)
            {
                a[i] /= 2;
                count++;
            }
            if (a[i] == a[i + 1])
            {
                condition = 0;
            }
        }

        if (condition)
        {
            std::cout << count << std::endl;
        }

        else
        {
            std::cout << -1 << '\n';
        }
    }
}