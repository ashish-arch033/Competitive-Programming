#include <iostream>

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {

        long long int n;
        std::cin >> n;

        if (n == 1)
        {
            std::cout << 1 << std::endl;
            continue;
        }

        int i = 1;
        int counter = 0;
        
        while (true) {
            if(n%i == 0) {
                counter++;
                i++;
            }
            else {
                break;
            }
        }

        std::cout << counter << std::endl;
        
    }
    return 0;
}