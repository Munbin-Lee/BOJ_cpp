#include <iostream>
#include <math.h>
using namespace std;

int map[50][5];
int r1, c1, r2, c2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int dy[4] = { 0,-1,0,1 };
    int dx[4] = { 1,0,-1,0 };
    cin >> r1 >> c1 >> r2 >> c2;
    int y = -r1, x = -c1, dir = 0, cnt = 0, cntCnt = 1, cntCntCnt = 0, fill = 0, maxFill = (r2 - r1 + 1) * (c2 - c1 + 1), size;

    for (int i = 1;; i++) {
        if (y >= 0 && y <= r2 - r1 && x >= 0 && x <= c2 - c1) {
            map[y][x] = i;
            if (++fill == maxFill) {
                size = log10(i) + 1;
                break;
            }
        }
        y += dy[dir];
        x += dx[dir];
        if (++cnt == cntCnt) {
            cnt = 0;
            dir = (dir + 1) % 4;
            if (++cntCntCnt == 2) {
                cntCntCnt = 0;
                cntCnt++;
            }
        }
    }


    for (int i = 0; i <= r2 - r1; i++) {
        for (int j = 0; j <= c2 - c1; j++) {
            cout.width(size);
            cout.fill(' ');
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
