#include <iostream>
#include <cmath>
using namespace std;

#define print cout << from << " " << to << "\n"

void hanoi(int from, int to, int n) {
    if (n == 1) print;
    else {
        int empty = 6 - from - to;
        hanoi(from, empty, n - 1);
        print;
        hanoi(empty, to, n - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << "\n";
    hanoi(1, 3, n);
    return 0;
}
