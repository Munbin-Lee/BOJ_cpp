#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double score = 0;
    string s;
    cin >> s;

    if (s[0] == 'A') score = 4;
    else if (s[0] == 'B') score = 3;
    else if (s[0] == 'C') score = 2;
    else if (s[0] == 'D') score = 1;

    if (s[1] == '+') score += 0.3;
    else if (s[1] == '-') score -= 0.3;

    cout << fixed;
    cout.precision(1);
    cout << score;
    return 0;
}
