#include <iostream>
// not a 900*

int main() {

    int T;
    std::cin >> T;
    while(T--) {

        long long int n,k,x;
        std::cin >> n >> k >> x;

        long long int fsum = (long long int)(k*(k+1)*0.5);

        long long int bsum = 0;

        for (int i = 0; i < k; i++) {
            bsum += n - i;
        }

        if (x>=fsum && x<=bsum) {
            std::cout << "YES" << std::endl;
            continue;
        }

        else {
            std::cout << "NO" << std::endl;
            continue;
        }

    }
}