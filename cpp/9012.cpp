#include <iostream>
#include <stack>
using namespace std;

bool isVPS(string s) {
    stack<int> st;
    for (int i = 0; i < (int)s.length(); i++) {
        if (st.empty() && s[i] == ')') return false;
        if (s[i] == '(') st.push(0);
        else st.pop();
    }
    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        cout << (isVPS(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}
