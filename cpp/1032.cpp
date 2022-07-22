#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    string name, s;
    cin >> n;
    cin >> name;

    while (--n) {
        cin >> s;
        for (int i = 0; i < (int)name.length(); i++) {
            if (name[i] != '?' && name[i] != s[i]) name[i] = '?';
        }
    }
    cout << name;
    return 0;
}
