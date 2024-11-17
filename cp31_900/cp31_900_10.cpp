#include <iostream>
#include <vector>

int main()
{

    int T;
    std::cin >> T;
    while (T--)
    {

        long long int n, q;
        std::cin >> n >> q;

        std::vector<long long int> array(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }
        std::vector<long long int> prefix(n + 1);
        long long int sum = 0;
        prefix[0] = 0;
        for (int i = 0; i < n; i++)
        {
            sum += array[i];
            prefix[i + 1] = sum;
        }
        long long int total = array[n - 1] + prefix[n - 1];

        while (q--)
        {
            long long int l, r, k;
            std::cin >> l >> r >> k;
            long long int newSum = (r - l + 1) * k + prefix[l - 1] + (total - prefix[r]);

            if (newSum % 2 == 1)
            {
                std::cout << "YES" << std::endl;
            }
            else
            {
                std::cout << "NO" << std::endl;
            }
        }
    }
}
