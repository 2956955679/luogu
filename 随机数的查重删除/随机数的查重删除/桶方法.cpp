#include<iostream>
using namespace std;

int main()
{
	int n, x;//������ĸ��������ֱ���
	int sum(0);//���ظ������ĸ���
	int bus[1002] = { 0 };//Ͱ�ڴ洢�������֣�Ͱ���Լ���¼������������ظ��ģ����������ǿ��ܵ�ֵ�ķ�Χ
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;//�ֱ�����
		if (bus[x])  //���������Ѿ����ֹ��ˣ���ô����
			continue;
		bus[x]++;  //�����ݷ���Ͱ��Ҽ���+1
		sum++;
	}
	cout << sum << endl;
	for (int i = 1; i <= 1000; i++)
		if (bus[i])//Ͱ�г��ֹ��������
			cout << i << ' ';
	cout << endl;
	return 0;
}