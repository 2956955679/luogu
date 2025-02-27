#include<iostream>
#include<stdio.h>
using namespace std;

int n, k;   // ����n��k��ȫ�ֱ���
int a[21];  // ����a[] ����Ҫѡ�����������
int b[21];  // �洢��ϵ�����
int tag = 0;

// �ж��Ƿ�Ϊ�����ĺ���
bool sushu(int sum) {
    if (sum < 2) return false;
    for (int i = 2; i * i <= sum; i++) {
        if (sum % i == 0) return false;
    }
    return true;
}

// �ݹ麯������������ϲ��жϺ��Ƿ�Ϊ����
void jia(int start, int size) {
    if (size == k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += b[i];
        }
        if (sushu(sum)) {
            tag++;  // �������Ļ�����+1
        }
        return;  // ����
    }
    for (int i = start; i < n; i++) {
        b[size] = a[i];  // ѡ��ǰ���� a[i] ������������
        jia(i + 1, size + 1);  // �ݹ���ã�ѡ����һ������
    }
}

// ������
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    jia(0, 0);  // �ӵ�0��λ�ÿ�ʼ�����
    cout <<tag<<endl;
    return 0;
}
