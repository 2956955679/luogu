#include<iostream>
#include<algorithm>//sort�ر�ͷ�ļ�
#include<stdio.h>
#include<math.h>
using namespace std;

struct cand {
    int id;//��������
    int score;//����
};

int com(cand a, cand b) {//sort������Ҫ�ĵ���������
    if (a.score > b.score) return 1;
    else if (a.score == b.score) {
        if (a.id > b.id) return 0;
    }
    else return 0;
}

int main() {
    cand candidates[5005];
    int m, n = 0;//�ƻ�¼ȡ�ͱ����μӵ�����
    int g;//���Է�����
    int count = 0;
    cin >> n >> m;
    g = m * 150 / 100;//ѡ������
    for (int i = 0; i < n; i++) cin >> candidates[i].id >> candidates[i].score;//�����źͳɼ�
    sort(candidates, candidates + n, com);//���н�������
    for (count = 0; candidates[count].score >= candidates[g].score; count++);
    cout << candidates[g - 1].score << ' ' << count << endl;
    for (int i = 0; i < count; i++) {
        cout << candidates[i].id << ' ' << candidates[i].score << endl;//���
    }
    return 0;
}