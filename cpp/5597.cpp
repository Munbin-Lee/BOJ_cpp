#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    bool arr[31]{};
    for (int i = 0; i < 28; i++) {
        cin >> n;
        arr[n] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (!arr[i]) cout << i << "\n";
    }
    return 0;
}
