#include<iostream>
#include <algorithm>
using namespace std;

//ע�⣺ѧ�Ŵ�1��ʼ����
struct student {
	int id;//ѧ��
	int c;
	int m;
	int e;
	int sum;//�ܳɼ�
};

bool com(student a, student b) {//ʹ��sort����������Ҫ�����������������ȷ����1
	if (a.sum > b.sum) return 1;//�ִܷ���b�ͷ���1
	else if (a.sum < b.sum) return 0;//���򷵻�0
	else {//���ܷ����ʱ
		if (a.c > b.c) return 1;
		else if (a.c < b.c) return 0;
		else {//�������ʱ
			if (a.id > b.id) return 0;//ѧ��С��������ǰ��
			else return 1;
		}
	}
}
int main()
{
	student a[301];//�ṹ��ѧ���������300��
	int n;//�ܲ�ѡ����
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].c >> a[i].m >> a[i].e; //����ɼ� 
		a[i].sum = a[i].c + a[i].m + a[i].e;//�ɼ����
		a[i].id = i; //ѧ�� 
	}
	sort(a + 1, a + 1 + n, com);//����
	for (int i = 1; i <= 5; i++) cout << a[i].id << ' ' << a[i].sum << endl;//ֻ���ǰ����ѧ������Ϣ
	return 0;
}

