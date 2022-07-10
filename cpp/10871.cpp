#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n >> x;

    while (n--) {
        int a;
        cin >> a;
        if (a < x) cout << a << " ";
    }
    return 0;
}
