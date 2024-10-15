#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
long long n, m, high[1000000 + 10];//本蒟蒻全部用了long long   qwq
long long tmp, left, right;
int main()
{
	scanf("%lld%lld", &n, &m);//注意读入输出要使用lld
	for (long long i = 1; i <= n; i++) {
		scanf("%lld", &high[i]);
		if (high[i] > right) right = high[i];//找到最大的high[i]做为right
	}
	while (left <= right) {
		int mid = (left + right) / 2;
		//printf("%d ",mid);
		tmp = 0;
		for (int i = 1; i <= n; i++)
			if (high[i] > mid) tmp += high[i] - mid;
		if (tmp < m) right = mid - 1;
		else left = mid + 1;
	}
	printf("%lld", right);//输出最终结果
	return 0;//不加return 0 结果return WA;
}