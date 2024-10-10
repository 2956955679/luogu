#include<iostream>
#include <algorithm>
using namespace std;

struct OI {
	string s;//姓名
	int y, m, d;//出生年月日
	int id;//编号
}a[101];

bool com(OI a, OI b) {
	if (a.y > b.y) return false;
	else if (a.y == b.y) {
		if (a.m > b.m) return false;
		else if (a.m == b.m) {
			if (a.d > b.d) return false;
			else if (a.d == b.d) {//如果生日相同
				if (a.id <= b.id) return false;
				if (a.id > b.id) return true;
			}
			else return true;
		}
		else return true;
	}
	else return true;
}

int main() {
	int n;//人数
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d, a[i].id = i;
	}
	sort(a, a + n, com);//感觉可能有点问题
	for (int i = 0; i < n; i++) {
		cout << a[i].s << endl;
	}
	return 0;
}