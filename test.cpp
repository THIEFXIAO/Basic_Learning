// 统计十进制转16进制有多少个字母

#include <iostream>

using namespace std;

int main() {

    int n = 268435455;
    int ans = 0, byte = 15;
    while (n != 0)
    {
        if ((n & 15) >= 10) ans++;
        n = n >> 4;
    }
    cout << ans << endl;
    return 0;
}