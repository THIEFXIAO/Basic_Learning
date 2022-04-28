// 统计二进制中相隔最远的1
/*
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>

using namespace std;

int main() {

    int n = 100000000;

    if ((n & (n - 1)) == 0) return 0;
    int ans = 0;
    int last = -1;
    for (int i = 0; n; i++, n >>= 1)
    {
        if (n  & 1)
        {
            if (last > -1) ans = max(i - last, ans);
            last = i;
        }
    }

    return ans;
}
*/