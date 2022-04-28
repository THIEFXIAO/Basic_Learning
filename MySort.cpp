// 熟悉一下排序算法

#include<iostream>
#include<vector>

using namespace std;

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="nums">输入数组</param>
void BubbleSort(vector<int>& nums) {
	int n = nums.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1]) swap(nums[j], nums[j + 1]);
		}
	}
}



int main() {

	vector<int>nums{ 3,44,38,5,47,15,36,26,27,2,46,4,19,50,48 };
	BubbleSort(nums);
	return 0;
}