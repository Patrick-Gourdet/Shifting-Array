#include <cassert>
#include <iostream>
#include <vector>
void swap_o_1(std::vector<int>& nums,int k)
{
	
		int size = nums.size();
		if (k > size && size > 1) k = abs(size - k);
		if (k >= size && size == 1) return;
		std::vector<int> res;
		int j = 0;
		for (int i = size - k; i < size; i++)
		{
			res.push_back(nums.at(i));
		}
		for (int i = 0; i < size - k; i++)
		{
			res.push_back(nums.at(i));
		}
		nums = res;
	
}

/// <summary>
/// Shift an array in place was also not my strongest competition
/// as I bended to the need of auxiliary space complexity of O(n)
/// </summary>
/// <returns></returns>
int main()
{
	std::vector<int> arr = { 1,2,3,4,5,6 };
	swap_o_1(arr, 2);
	assert(arr.at(0),5);
	swap_o_1(arr, 1);
	assert(arr.at(0), 5);
	swap_o_1(arr, 4);
	assert(arr.at(0), 4);
	arr = { -1,4 };
	swap_o_1(arr, 3);
	assert(arr.at(0), 4);
}