#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    bool arr[10];
    memset(arr, true, sizeof(arr));
    for (auto i : arr) cout << i << "\n";
    return 0;
}
