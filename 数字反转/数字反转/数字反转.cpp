#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
using namespace std;
//��Ȼ�����ַ��ͣ���
char a, b, c, d;
int main() {
	scanf("%c%c%c.%c", &a, &b, &c, &d);
	printf("%c.%c%c%c", d, c, b, a);
	return 0;
}