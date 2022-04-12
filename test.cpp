// 统计十进制转16进制有多少个字母

#include <iostream>

using namespace std;

string inttohex(int n) {
    string a;
    char b[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (n != 0)
    {
        a += b[n % 16];
        n /= 16;
    }
    return a;
}

int main() {

    for (size_t i = 0; i < INT32_MAX; i++)
    {
        int n = i;
        int nn = i;
        int ans = 0, byte = 15, ans1 = 0;

        string s = inttohex(nn);
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] > '9') ans1++;
        }

        while (n != 0)
        {
            if ((n & 15) > 9) ans++;
            n = n >> 4;
        }
        if (ans != ans1)
        {
            cout << i << endl;
            cout << ans << "  " << ans1 << endl;
        }
        
    }
    
    return 0;
}