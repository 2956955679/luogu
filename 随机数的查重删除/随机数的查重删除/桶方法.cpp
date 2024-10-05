#include<iostream>
using namespace std;

int main()
{
	int n, x;//随机数的个数和数字本身
	int sum(0);//不重复整数的个数
	int bus[1002] = { 0 };//桶内存储的是数字，桶可以检索录入的新数字中重复的，中括号内是可能的值的范围
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;//分别输入
		if (bus[x])  //如果这个数已经出现过了，那么跳过
			continue;
		bus[x]++;  //把数据放在桶里，且计数+1
		sum++;
	}
	cout << sum << endl;
	for (int i = 1; i <= 1000; i++)
		if (bus[i])//桶中出现过这个数字
			cout << i << ' ';
	cout << endl;
	return 0;
}