#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a;
    cin >> a;

    char result;
    if (a >= 90) result = 'A';
    else if (a >= 80) result = 'B';
    else if (a >= 70) result = 'C';
    else if (a >= 60) result = 'D';
    else result = 'F';

    cout << result;
    return 0;
}
