#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int index, arr[26]{};
    string s;
    cin >> s;

    for (int i = 0; i < (int)s.length(); i++) {
        index = s[i] - 'a';
        if (!arr[index]) arr[index] = i + 1;
    }

    for (int i : arr) {
        cout << i - 1 << " ";
    }
    return 0;
}
