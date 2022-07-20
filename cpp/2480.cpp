#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    }
    else if (a == b || b == c) {
        cout << 1000 + b * 100;
    }
    else if (c == a) {
        cout << 1000 + a * 100;
    }
    else {
        cout << max(a, max(b, c)) * 100;
    }
    return 0;
}
