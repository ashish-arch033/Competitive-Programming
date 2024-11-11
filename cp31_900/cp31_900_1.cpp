#include <iostream>
#include <vector>
#include <set>

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int a, b, Xk, Yk, Xq, Yq;

        std::cin >> a >> b;
        std::cin >> Xk >> Yk;
        std::cin >> Xq >> Yq;

        std::vector<std::pair<int, int>> K = {
            {Xk + a, Yk + b},
            {Xk + a, Yk - b},
            {Xk - a, Yk + b},
            {Xk - a, Yk - b},
            {Xk + b, Yk + a},
            {Xk + b, Yk - a},
            {Xk - b, Yk + a},
            {Xk - b, Yk - a}};

        std::vector<std::pair<int, int>> Q = {
            {Xq + a, Yq + b},
            {Xq + a, Yq - b},
            {Xq - a, Yq + b},
            {Xq - a, Yq - b},
            {Xq + b, Yq + a},
            {Xq + b, Yq - a},
            {Xq - b, Yq + a},
            {Xq - b, Yq - a}};

        std::set<std::pair<int, int>> __K(K.begin(), K.end());
        std::set<std::pair<int, int>> __Q(Q.begin(), Q.end());

        int counter = 0;

        for (auto &cK : __K)
        {
            for (auto &cQ : __Q)
            {
                if (cK == cQ)
                {
                    counter++;
                }
            }
        }

        std::cout << counter << std::endl;
    }
}