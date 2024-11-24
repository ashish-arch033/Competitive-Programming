#include <iostream>
#include <vector>
#include <stdint.h>
#define int long long

int32_t main() {

    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;

        std::vector<int> array(n);

        for(int i = 0; i < n; i++) {
            std::cin >> array[i];
            array[i]++;
        }

        for(int i = 0; i < n-1; i++) {
            if(array[i+1] % array[i] == 0) {
                array[i+1]++;
            }
        }

        for(int i = 0; i < n; i++) {
            std::cout << array[i] << " ";
        }

        std::cout << std::endl;

    }

}