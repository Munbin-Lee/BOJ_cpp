#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, num;
    string s;
    stack<int> st;

    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> num;
            st.push(num);
        }
        else if (s == "pop") {
            if (st.empty()) cout << "-1" << "\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (s == "size") {
            cout << st.size() << "\n";
        }
        else if (s == "empty") {
            cout << st.empty() << "\n";
        }
        else if (s == "top") {
            if (st.empty()) cout << "-1" << "\n";
            else cout << st.top() << "\n";
        }
    }
    return 0;
}
