#include <iostream>
#include <algorithm>
using namespace std;

//��һ��bool���飬����������10, �ҾͰ�bool[10]����flag����ֵΪtrue�������������10��Ϊbool[10]Ϊtrue, �ͻ����������
int n[105], g, tmp, gg;//����Ҫ������һ������������Ϊ���˹������֣�����ʵ�ʴ洢�����ݸ����ǲ�������������ݸ����ġ�
bool pn[1005];//bool�����ж�
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