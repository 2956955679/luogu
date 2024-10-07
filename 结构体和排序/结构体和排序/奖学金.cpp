#include<iostream>
#include <algorithm>
using namespace std;

//注意：学号从1开始！！
struct student {
	int id;//学号
	int c;
	int m;
	int e;
	int sum;//总成绩
};

bool com(student a, student b) {//使用sort函数降序需要引入第三方函数，正确返回1
	if (a.sum > b.sum) return 1;//总分大于b就返回1
	else if (a.sum < b.sum) return 0;//否则返回0
	else {//在总分相等时
		if (a.c > b.c) return 1;
		else if (a.c < b.c) return 0;
		else {//语文相等时
			if (a.id > b.id) return 0;//学号小的人排在前面
			else return 1;
		}
	}
}
int main()
{
	student a[301];//结构体学生类型最多300个
	int n;//总参选人数
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].c >> a[i].m >> a[i].e; //输入成绩 
		a[i].sum = a[i].c + a[i].m + a[i].e;//成绩求和
		a[i].id = i; //学号 
	}
	sort(a + 1, a + 1 + n, com);//排序
	for (int i = 1; i <= 5; i++) cout << a[i].id << ' ' << a[i].sum << endl;//只输出前五名学生的信息
	return 0;
}

