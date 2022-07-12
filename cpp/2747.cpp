#include <iostream>
using namespace std;

int dp[46] = { 0,1, };

int fibo(int n) {
    if (n == 0) return 0;
    if (dp[n]) return dp[n];
    return dp[n] = fibo(n - 2) + fibo(n - 1);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
