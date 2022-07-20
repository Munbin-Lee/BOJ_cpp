#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int primeMax = 1000;
    bool isPrime[primeMax + 1]{};
    for (int i = 2; i <= primeMax; i++) isPrime[i] = true;
    for (int i = 2; i * i <= primeMax; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= primeMax; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return 0;
}
