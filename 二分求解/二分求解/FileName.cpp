#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double a, b, c, d;
double yanzheng(double x) {
	return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
	double l, r, m, x1, x2 = 0;
	int count = 0;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	for (int i = -100; i < 100; i++) {
		l = i;
		r = i + 1;
		x1 = yanzheng(l);
		x2 = yanzheng(r);
		if (!x1)//�����˵���0
		{
			printf("%.2lf ", l);//��λdoubleС������������0��
			count++;//�����
		}
		if (x1 * x2 < 0)  // �������и�
		{
			while (r - l >= 0.001) // ���ֿ��ƾ��ȣ���Ϊ1��������ֻ��һ����
			{
				m = (l + r) / 2; // �е�
				if (yanzheng(m) * yanzheng(r) <= 0)
					l = m;
				else
					r = m; // �����е㴦����ֵ��С���䡣
			}
			printf("%.2lf ", r);
			count++;
		}
		if (count == 3)
			break;
	}

	return 0;
}