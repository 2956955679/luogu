#include <iostream>
using namespace std;

int main() {
    int one, two, three; // ������
    int a[9]; // ���9�����ֵ�����

    for (int ob = 1; ob < 10; ob++) { // ��һλ����Ϊ0
        for (int os = 0; os < 10; os++) {
            for (int og = 0; og < 10; og++) {
                one = 100 * ob + 10 * os + og; // ��ϳ���λ��
                two = 2 * one; // �ڶ�����λ��
                three = 3 * one; // ��������λ��

                // ����Ƿ�����λ����Χ��
                if (two >= 100 && two < 1000 && three >= 100 && three < 1000) {
                    int tb, ts, tg, hb, hs, hg = 0;
                    // ��ȡ����λ������������
                    a[0] = ob;
                    a[1] = os;
                    a[2] = og;
                    a[3] = two / 100;
                    a[4] = (two / 10) % 10;
                    a[5] = two % 10;
                    a[6] = three / 100;
                    a[7] = (three / 10) % 10;
                    a[8] = three % 10;
                    // ʹ�ò�����������ظ�����
                    bool unique = true; // ��ʼ��Ϊtrue
                    for (int n = 0; n < 9; n++) {
                        for (int m = n + 1; m < 9; m++) {
                            if (a[n] == a[m]) {
                                unique = false; // �ҵ��ظ�����
                                break;
                            }
                        }
                        if (!unique) break; // �˳����ѭ��
                    }
                    tb = two / 100;
                    ts = (two / 10) % 10;
                    tg = two % 10;
                    hb = three / 100;
                    hs = (three / 10) % 10;
                    hg = three % 10;
                    // ������ֶ����ظ���������
                    if (unique && tb != 0 && ts != 0 && tg != 0 && hb != 0 && hs != 0 && hg != 0) {
                        cout << one << " " << two << " " << three << endl;
                    }
                }
            }
        }
    }
    return 0;
}
