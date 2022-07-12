#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;
    return fibo(n - 2) + fibo(n - 1);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
