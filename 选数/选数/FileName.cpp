#include<iostream>
#include<stdio.h>
using namespace std;

int n, k;   // 假设n和k是全局变量
int a[21];  // 假设a[] 是你要选择的数字数组
int b[21];  // 存储组合的数组
int tag = 0;

// 判断是否为素数的函数
bool sushu(int sum) {
    if (sum < 2) return false;
    for (int i = 2; i * i <= sum; i++) {
        if (sum % i == 0) return false;
    }
    return true;
}

// 递归函数用于生成组合并判断和是否为素数
void jia(int start, int size) {
    if (size == k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += b[i];
        }
        if (sushu(sum)) {
            tag++;  // 是素数的话计数+1
        }
        return;  // 返回
    }
    for (int i = start; i < n; i++) {
        b[size] = a[i];  // 选择当前数字 a[i] 并将其加入组合
        jia(i + 1, size + 1);  // 递归调用，选择下一个数字
    }
}

// 主函数
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    jia(0, 0);  // 从第0个位置开始找组合
    cout <<tag<<endl;
    return 0;
}
