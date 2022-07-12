#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;

    for (int i = 0; i < (int)s.length(); i++) {
        char c = s[i];
        if (isupper(c)) c = tolower(c);
        else c = toupper(c);
        cout << c;
    }
    return 0;
}
