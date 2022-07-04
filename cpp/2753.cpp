#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a;
    cin >> a;

    int result = 0;
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) result = 1;

    cout << result;
    return 0;
}
