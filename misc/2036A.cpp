#include <iostream>
#include <vector>

int main()
{

    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        int a = 1;

        std::vector<int> array(n);

        for(int i = 0; i < n; i++) {
            std::cin >> array[i];
        }

        for(int i = 0; i < n-1; i++) {
            if(std::abs(array[i+1] - array[i]) == 5 || std::abs(array[i+1] - array[i]) == 7) {
                continue;
            }
            else {
                a = 0;
                break;
            }
        }

        if(a) {
            std::cout << "YES" << std::endl;
        }

        else {
            std::cout << "NO" << std::endl;
        }
    }
    
}