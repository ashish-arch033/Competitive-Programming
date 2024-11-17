#include <iostream>
#include <vector>

void algo(long long int *N)
{

    if ((*N) % 2 == 0)
    {
        *N = (*N) / 2;
    }
    else
    {
        *N = 3 * (*N) + 1;
    }

    std::cout << (*N) << " ";
}

int main()
{

    long long int n;
    std::cin >> n;

    std::cout << n << " ";

    while (n > 1)
    {
        algo(&n);
    }

    return 0;
}