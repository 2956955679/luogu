#include<iostream>
#include<stdio.h>
using namespace std;

const int MAXN = 1e6 + 10;
int read() {//���
	int x = 0, f = 1;//��ʽ���յ����֣�f������ǰ�ķ��ű�ʾ
	char c = getchar();
	while (c < '0' || c>'9') {
		if (c == '-') f = -1;//�����ȡ�����Ǹ��� '-'���򽫷��ű�־ f ����Ϊ -1����ʾ�������������Ǹ�����
		c = getchar();
	}
	while (c >= '0' && c <= '9') {//ע�������������ַ�
		x = x * 10 + c - '0';//�� x ����Ϊ��ǰֵ���� 10 ���ϵ�ǰ�ַ�ת�������ֵ�ֵ��c - '0' ���ַ� '0' �� '9' ת��Ϊ��Ӧ������ֵ��0 �� 9����
		c = getchar();
	}
	return x * f;//�������
}
int a[MAXN];
int main() {
	int n = read(), m = read();//����
	for (int i = 1; i <= n; i++) a[i] = read();
	while (m--) {//ѯ��m��
		int x = read();
		int ans = lower_bound(a + 1, a + n + 1, x) - a;//�����ѣ�ע��-a�����Եõ�ʵ�ʵ�λ��
		if (x != a[ans]) printf("-1 ");//û�У����-1
		else printf("%d ", ans);//�У����ans
	}
	return 0;
}