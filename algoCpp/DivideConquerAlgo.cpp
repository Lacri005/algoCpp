#include "DivideConquerAlgo.h"


/*¶ş·Ö²éÕÒ*/

int dfs(std::vector<int>& nums, int target, int i, int j)
{
	if (i > j) return -1;
	int m = i + (j - i) / 2;
	if (nums[m] > target) return dfs(nums, target, i, m - 1);
	else if (nums[m] < target) return dfs(nums, target, m + 1, j);
	else return m;
}
