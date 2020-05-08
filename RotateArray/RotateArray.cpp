#include <cassert>
#include <iostream>
#include <vector>
std::vector<int>* swap_o_1(std::vector<int>& nums,int k)
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


int main()
{
	std::vector<int> arr = { 1,2,3,4,5,6 };
	auto res = swap_o_1(arr, 2);
	assert(res->at(0),5);
	res = swap_o_1(arr, 1);
	assert(res->at(0), 5);
	res = swap_o_1(arr, 4);
	assert(res->at(0), 4);
	// give k shifts to the index
	// a slight mathimatical fines
	// with an if should do the trick
	
}