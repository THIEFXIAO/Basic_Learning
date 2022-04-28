// 熟悉一下排序算法

#include<iostream>
#include<vector>

using namespace std;

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="nums">输入数组</param>
void BubbleSort(vector<int>& nums) {
	size_t n = nums.size();
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1]) swap(nums[j], nums[j + 1]);
		}
	}
}

void SelectionSort(vector<int>& nums) {
	size_t n = nums.size() - 1;
	for (size_t i = 0; i <= n; i++)
	{
		size_t max = 0, last = n - i;
		for (size_t j = 0; j <= last; j++)
		{
			if (nums[j] > nums[max]) max = j;
		}
		swap(nums[last], nums[max]);
	}
}
void InsertionSort(vector<int>& nums) {
	size_t n = nums.size();
	for (size_t i = 1; i < n; i++)
	{
		size_t PreIndex = i;
		int Current = nums[i];
		// PreIndex-- > 0 无论是否满足条件都会自减一次
		while (PreIndex-- > 0 && Current < nums[PreIndex])
		{
			nums[PreIndex + 1] = nums[PreIndex];
		}
		nums[PreIndex + 1] = Current;
	}
}

int main() {

	vector<int>nums{ 3,44,38,5,47,15,36,26,27,2,46,4,19,36,50,48 };

	cout << "2  3  4  5  15  19  26  27  36  36  38  44  46  47  48  50" << endl;
	// BubbleSort(nums);
	// SelectionSort(nums);
	InsertionSort(nums);
	for (size_t i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << "  ";
	}
	cout << endl;
	return 0;
}