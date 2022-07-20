#include <iostream>
using namespace std;

int n;

void star(int i) {
    for (int j = 0; j < i; j++) cout << '*';
    for (int j = 0; j < n - i; j++) cout << "  ";
    for (int j = 0; j < i; j++) cout << '*';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;

    for (int i = 1; i < n; i++) star(i);
    for (int i = n; i > 0; i--) star(i);
    return 0;
}
