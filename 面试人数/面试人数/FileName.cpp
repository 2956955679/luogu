#include<iostream>
#include<algorithm>//sort必备头文件
#include<stdio.h>
#include<math.h>
using namespace std;

struct cand {
    int id;//报名人数
    int score;//分数
};

int com(cand a, cand b) {//sort函数需要的第三方函数
    if (a.score > b.score) return 1;
    else if (a.score == b.score) {
        if (a.id > b.id) return 0;
    }
    else return 0;
}

int main() {
    cand candidates[5005];
    int m, n = 0;//计划录取和报名参加的人数
    int g;//面试分数线
    int count = 0;
    cin >> n >> m;
    g = m * 150 / 100;//选手名次
    for (int i = 0; i < n; i++) cin >> candidates[i].id >> candidates[i].score;//输入编号和成绩
    sort(candidates, candidates + n, com);//进行降序排序
    for (count = 0; candidates[count].score >= candidates[g].score; count++);
    cout << candidates[g - 1].score << ' ' << count << endl;
    for (int i = 0; i < count; i++) {
        cout << candidates[i].id << ' ' << candidates[i].score << endl;//输出
    }
    return 0;
}