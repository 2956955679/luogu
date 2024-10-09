#include<iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

struct point
{
	int x, y, z;
}a[50010];

bool cmp(point a, point b)
{
	return a.z <= b.z;
}
int main()
{
	unsigned int n;
	cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i++)
		cin >> a[i].x >> a[i].y >> a[i].z;
	sort(a + 1, a + n + 1, cmp);
	for (int j = 1; j <= n - 1; j++)
		s += sqrt(pow(a[j].x - a[j + 1].x, 2) + pow(a[j].y - a[j + 1].y, 2) + pow(a[j].z - a[j + 1].z, 2));
	cout << setiosflags(ios::fixed) << setprecision(3) << s;
	return 0;
}