// LeetCode 393. UTF-8 编码验证

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int>data{ 197,130,1 };
    int n = data.size();
    for (size_t i = 0; i < n; i++)
    {
        int a = data[i], flag = 0;
        for (size_t j = 0; j < 4; j++)
        {
            int b = a >> (7 - j); //保存a移位后的数
            if (b & 1) flag++;
            else break;
            if (flag == 4)
            {
                if ((a >> 3) & 1) return false;
            }
        }
        if ((flag == 1) || ((flag + i) > n))
            return false;
        int c = flag - 1;
        for (size_t m = 0; m < flag - 1; m++)
        {
            int next = data[i + 1];
            if (((next >> 7) & 1) && (!((next >> 6) & 1)))
            {
                i++;
            }
            else
            {
                return false;
            }
        }
    }
    
    cout << "true" << endl;

    system("pause");
    return 0;
}