#include <iostream>
using namespace std;

int primeMax = 10000;
bool isPrime[10001];

void solve(int num) {
    for (int i = 0; i < num; i++) {
        int first = num / 2 - i;
        int second = num - first;
        if (isPrime[first] && isPrime[second]) {
            cout << first << ' ' << second << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for (int i = 2; i <= primeMax; i++) isPrime[i] = true;
    for (int i = 2; i * i <= primeMax; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= primeMax; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
