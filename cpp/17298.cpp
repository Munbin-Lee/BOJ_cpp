#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, num;
    cin >> n;
    int arr[n];
    int ans[n];
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num;
    }

    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[i] >= st.top()) st.pop();
        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }

    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}
