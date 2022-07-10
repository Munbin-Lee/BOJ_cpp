#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, num, v;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num;
    }
    cin >> v;

    int cnt = 0;
    for (int i : arr) {
        if (i == v) cnt++;
    }
    cout << cnt;
    return 0;
}
