#include <iostream>
#include <vector>

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {

        int a, b, n;
        std::cin >> a >> b >> n;

        std::vector<long long int> array(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }

        long long int timer = 0;

        timer += b-1;

        for (int i  = 0; i < n; i++) {

            if(array[i] < a) {
                timer += array[i];
            }

            else {
                timer += a-1;
            }
        }

        timer++;

        std::cout << timer << std::endl;

    }
}

