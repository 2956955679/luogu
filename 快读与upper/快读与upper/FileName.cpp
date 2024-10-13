#include<iostream>
#include<stdio.h>
using namespace std;

const int MAXN = 1e6 + 10;
int read() {//快读
	int x = 0, f = 1;//形式最终的数字，f是数字前的符号表示
	char c = getchar();
	while (c < '0' || c>'9') {
		if (c == '-') f = -1;//如果读取到的是负号 '-'，则将符号标志 f 设置为 -1，表示接下来的数字是负数。
		c = getchar();
	}
	while (c >= '0' && c <= '9') {//注意这里读入的是字符
		x = x * 10 + c - '0';//将 x 更新为当前值乘以 10 加上当前字符转换成数字的值。c - '0' 将字符 '0' 到 '9' 转换为相应的整数值（0 到 9）。
		c = getchar();
	}
	return x * f;//处理符号
}
int a[MAXN];
int main() {
	int n = read(), m = read();//读入
	for (int i = 1; i <= n; i++) a[i] = read();
	while (m--) {//询问m次
		int x = read();
		int ans = lower_bound(a + 1, a + n + 1, x) - a;//二分搜，注意-a，可以得到实际的位置
		if (x != a[ans]) printf("-1 ");//没有，输出-1
		else printf("%d ", ans);//有，输出ans
	}
	return 0;
}