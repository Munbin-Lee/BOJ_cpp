#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
    return 0;
}
