#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    string s;
    stack<char> st;

    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        s += " ";
        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else st.push(s[i]);
        }
        cout << "\n";
    }
    return 0;
}
