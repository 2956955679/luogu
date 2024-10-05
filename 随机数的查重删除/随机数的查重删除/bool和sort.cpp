#include <iostream>
#include <algorithm>
using namespace std;

//开一个bool数组，假设输入了10, 我就把bool[10]打上flag（赋值为true），后面输入的10因为bool[10]为true, 就会读不进数组
int n[105], g, tmp, gg;//这里要单独开一个计数器。因为过滤过了数字，所以实际存储的数据个数是不等于输入的数据个数的。
bool pn[1005];//bool数组判断
int main()
{
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        cin >> tmp;
        if (pn[tmp] == 1)continue;
        pn[tmp] = 1;
        n[gg++] = tmp;
    }
    sort(n, n + gg);
    cout << gg << endl;
    for (int i = 0; i < gg; i++)cout << n[i] << " ";
}