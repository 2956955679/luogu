#include<iostream>
#include<algorithm>
using namespace std;

//��Ŀ������ˡ��ܹ��и�õ���С�ε���󳤶ȡ������ݷ�Χ�ϴ󣬹�ʹ�ö��ִ�

int main() {
	int n, k;//ԭľ��������С�εĳ���
	int a[100005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mid, l = 0, r = 1e8 + 1;//l����ȡ������Сֵ,r�Ǿ���ȡ������ֵ
	while (l + 1 < r) {
		mid = (l + r) / 2;
		int count = 0;//��midΪ�����ܹ��г�ľ��Ķ���
		for (int i = 1; i <= n; i++)
			count += a[i] / mid;//ö��ÿ��ľ�����г�����ľ�������
		if (count >= k)l = mid;//�����еñ�ԭ���Ķ��ˣ���ÿ�εĳ��ȿ����ٳ�
		else r = mid;
	}
	cout << l << endl;//��Ϊԭ��lֵ��1����ֱ������Ϳ���
	return 0;
}