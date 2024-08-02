#include "algo.h"

/*选择排序*/
void selectionSort(std::vector<int>& nums)
{
	int n = nums.size();
	for (int i = 0; i < n - 1; i++){
		int k = i;
		for (int j = k + 1; j < n; j++) {
			if (nums[j] < nums[k]) k = j;
		}
		std::swap(nums[i], nums[k]);
	}
}

/*冒泡排序*/
void bubbleSortWithFlag(std::vector<int>& nums)
{
	for (int n = nums.size(); n > 0; n--)
	{
		bool flag = false; // 初始化标志位
		for (int i = 0; i < n; i++)
		{
			if (nums[i] > nums[i + 1]) {
				std::swap(nums[i], nums[i + 1]);
				flag = true;
			}
		}
		if (!flag) break; // 如果一轮循环下来，没有交换过，则说明数组已经排列好了，可以直接结束。
	}
}

void insertionSort(std::vector<int>& nums)
{
	int n = nums.size();
	for (int i = 1; i < n; i++) {
		int base = nums[i]; int j = i - 1;
		while (j >= 0 && base < nums[j]) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = base;
	}
}
