#include <iostream>
#include <stack>
using namespace std;

int cnt = 1;
stack<int> st;

string write(int n) {
    string s;
    while (cnt <= n) {
        st.push(cnt);
        cnt++;
        s += "+\n";
    }
    if (st.top() == n) {
        st.pop();
        s += "-\n";
        return s;
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, num;
    string s;

    cin >> n;
    while (n--) {
        cin >> num;
        if (write(num) != "NO") {
            s += write(num);
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << s;
    return 0;
}
