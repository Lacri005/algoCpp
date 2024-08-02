#include "algo.h"

/*ѡ������*/
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

/*ð������*/
void bubbleSortWithFlag(std::vector<int>& nums)
{
	for (int n = nums.size(); n > 0; n--)
	{
		bool flag = false; // ��ʼ����־λ
		for (int i = 0; i < n; i++)
		{
			if (nums[i] > nums[i + 1]) {
				std::swap(nums[i], nums[i + 1]);
				flag = true;
			}
		}
		if (!flag) break; // ���һ��ѭ��������û�н���������˵�������Ѿ����к��ˣ�����ֱ�ӽ�����
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
