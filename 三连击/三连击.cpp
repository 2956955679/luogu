#include <iostream>
using namespace std;

int main() {
    int one, two, three; // 三个数
    int a[9]; // 存放9个数字的数组

    for (int ob = 1; ob < 10; ob++) { // 第一位不能为0
        for (int os = 0; os < 10; os++) {
            for (int og = 0; og < 10; og++) {
                one = 100 * ob + 10 * os + og; // 组合成三位数
                two = 2 * one; // 第二个三位数
                three = 3 * one; // 第三个三位数

                // 检查是否在三位数范围内
                if (two >= 100 && two < 1000 && three >= 100 && three < 1000) {
                    int tb, ts, tg, hb, hs, hg = 0;
                    // 提取各个位数并存入数组
                    a[0] = ob;
                    a[1] = os;
                    a[2] = og;
                    a[3] = two / 100;
                    a[4] = (two / 10) % 10;
                    a[5] = two % 10;
                    a[6] = three / 100;
                    a[7] = (three / 10) % 10;
                    a[8] = three % 10;
                    // 使用布尔变量检查重复数字
                    bool unique = true; // 初始化为true
                    for (int n = 0; n < 9; n++) {
                        for (int m = n + 1; m < 9; m++) {
                            if (a[n] == a[m]) {
                                unique = false; // 找到重复数字
                                break;
                            }
                        }
                        if (!unique) break; // 退出外层循环
                    }
                    tb = two / 100;
                    ts = (two / 10) % 10;
                    tg = two % 10;
                    hb = three / 100;
                    hs = (three / 10) % 10;
                    hg = three % 10;
                    // 如果数字都不重复，输出结果
                    if (unique && tb != 0 && ts != 0 && tg != 0 && hb != 0 && hs != 0 && hg != 0) {
                        cout << one << " " << two << " " << three << endl;
                    }
                }
            }
        }
    }
    return 0;
}
