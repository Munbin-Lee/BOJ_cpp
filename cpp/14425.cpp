#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, cnt = 0;
    cin >> n >> m;

    string str;
    set<string> set;
    while (n--) {
        cin >> str;
        set.insert(str);
    }

    while (m--) {
        cin >> str;
        cnt += (set.find(str) != set.end());
    }
    cout << cnt;
    return 0;
}
