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
		if (!x1)//如果左端点是0
		{
			printf("%.2lf ", l);//两位double小数，不够的用0补
			count++;//解计数
		}
		if (x1 * x2 < 0)  // 区间内有根
		{
			while (r - l >= 0.001) // 二分控制精度，因为1个数字内只有一个解
			{
				m = (l + r) / 2; // 中点
				if (yanzheng(m) * yanzheng(r) <= 0)
					l = m;
				else
					r = m; // 计算中点处函数值缩小区间。
			}
			printf("%.2lf ", r);
			count++;
		}
		if (count == 3)
			break;
	}

	return 0;
}