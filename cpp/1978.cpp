#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    if (num == 1) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, num, cnt = 0;
    cin >> n;
    while (n--) {
        cin >> num;
        cnt += isPrime(num);
    }
    cout << cnt;
    return 0;
}
