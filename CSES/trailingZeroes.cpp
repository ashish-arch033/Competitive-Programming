#include <iostream>
#include <stdint.h>
#include <cmath>
#define int long long

int32_t main() {

    int n;
    std::cin >> n;

    int i = 1;
    int count = 0;

    while( n / pow(5,i) != 0) {

        count += n / pow(5,i);
        i++;
    }

    std::cout << count << std::endl;
}