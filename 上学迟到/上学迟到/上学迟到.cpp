#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int s, v, t = 0;//·�̣��ٶȣ�ʱ��
	int k, p = 0;//Сʱ��ʣ�µķ���
	cin >> s >> v;
	t = s / v;
	k = (t + 10) / 60;
	p = (t + 10) % 60;
	if (s % v != 0) {
		t++;
	}
	if (t + 10 >= 60) {
		printf("%02d:%02d", 7 - k, 59 - p);
		if (t + 10 >= 480) {
			printf("%02d:%02d", 23 - (k - 8), 59 - p);
		}
	}
	else  printf("07:%02d", 50 - t);
	return 0;
}