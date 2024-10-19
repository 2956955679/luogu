#include<iostream>
#include<algorithm>
using namespace std;

//题目里出现了“能够切割得到的小段的最大长度”且数据范围较大，故使用二分答案

int main() {
	int n, k;//原木的数量和小段的长度
	int a[100005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mid, l = 0, r = 1e8 + 1;//l是能取到的最小值,r是绝对取不到的值
	while (l + 1 < r) {
		mid = (l + r) / 2;
		int count = 0;//以mid为长度能够切出木板的段数
		for (int i = 1; i <= n; i++)
			count += a[i] / mid;//枚举每段木材能切出多少木板再相加
		if (count >= k)l = mid;//段数切得比原定的多了，则每段的长度可以再长
		else r = mid;
	}
	cout << l << endl;//因为原本l值是1所以直接输出就可以
	return 0;
}