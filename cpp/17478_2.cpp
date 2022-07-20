#include <string>
#include <iostream>
using namespace std;

int N;
string ANSWER[7] = {
    "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n",
    "\"����Լ��� ������?\"\n",
    "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n",
    "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n",
    "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n",
    "��� �亯�Ͽ���.\n",
    "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n"
};

void underbar(int n) {
    for (int i = 0; i < n; i++) cout << "____";
}

void solve(int n) {
    if (n == N + 1) return;
    if (n == N) {
        underbar(n); cout << ANSWER[1];
        underbar(n); cout << ANSWER[6];
        underbar(n); cout << ANSWER[5];
    }
    else {
        for (int i = 1; i < 5; i++) {
            underbar(n); cout << ANSWER[i];
        }
        solve(n + 1);
        underbar(n);
        cout << ANSWER[5];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    cout << ANSWER[0];
    solve(0);
}
