#include<iostream>
#include <algorithm>
using namespace std;

struct OI {
	string s;//����
	int y, m, d;//����������
	int id;//���
}a[101];

bool com(OI a, OI b) {
	if (a.y > b.y) return false;
	else if (a.y == b.y) {
		if (a.m > b.m) return false;
		else if (a.m == b.m) {
			if (a.d > b.d) return false;
			else if (a.d == b.d) {//���������ͬ
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
	int n;//����
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d, a[i].id = i;
	}
	sort(a, a + n, com);//�о������е�����
	for (int i = 0; i < n; i++) {
		cout << a[i].s << endl;
	}
	return 0;
}