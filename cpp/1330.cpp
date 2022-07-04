#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a >> b;

    string result;
    if (a > b) result = ">";
    else if (a < b) result = "<";
    else result = "==";

    cout << result;
    return 0;
}
