#include <iostream>
using namespace std;

int n;

string str1[] = {
    "\"����Լ��� ������?\"\n" ,
    "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n" ,
    "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n" ,
    "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n"
};

string str2[] = {
    "\"����Լ��� ������?\"\n",
    "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n",
    "��� �亯�Ͽ���.\n"
};

string str3 = "��� �亯�Ͽ���.\n";

string str4 = "____";

void chat(int num) {
    if (num == 0) {
        for (string s : str2) {
            for (int i = num; i < n; i++) cout << str4;
            cout << s;
        }
    }
    else {
        for (string s : str1) {
            for (int i = num; i < n; i++) cout << str4;
            cout << s;
        }
        chat(num - 1);
        for (int i = num; i < n; i++) cout << str4;
        cout << str3;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    chat(n);
    return 0;
}
