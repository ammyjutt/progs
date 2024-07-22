//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//
//class Solution {
//public:
//	bool splitArraySameAverage(vector<int>& nums) {
//		int len_nums = nums.size();
//		int half_size = len_nums / 2;
//
//
//		unordered_map<int, bool> mp;
//
//		int total_sum = 0;
//
//		for (auto& item : nums)
//		{
//			total_sum += item;
//		}
//
//
//		// transform 
//
//		for (auto& item : nums)
//		{
//			item = item * len_nums - total_sum;
//		}
//
//
//
//		// check left half possible subsets
//
//
//		for (int i = 1; i < (1 << half_size) ; i++)
//		{
//			// i - combination of bits
//
//			int this_subset_sum = 0;
//
//			for (int j = 0; j < half_size; j++)
//			{
//				if ((1 << j) & i)
//				{
//					this_subset_sum += nums[j];
//				}
//			}
//
//			if (this_subset_sum == 0)
//				return true;
//
//
//			mp[this_subset_sum] = true;
//
//		}
//
//
//
//		for (int i = 1; i < (1 << (len_nums - half_size)) ; i++)
//		{
//			int this_subset_sum = 0;
//
//
//			for (int j = 0; j < (len_nums - half_size); j++)
//			{
//				if ((1 << j) & i)
//				{
//					this_subset_sum += nums[j + half_size];
//				}
//			}
//
//			// couldn't understand the last check :)
//			if ((this_subset_sum == 0) or ((mp[-this_subset_sum] == true ) and (i != (1 << (len_nums - half_size))-1 )))
//				return true;
//
//		}
//
//
//
//		return false;
//
//
//	}
//};
//
//
//
//
//
//int main()
//{
//	Solution s;
//
//
//	vector<int> v = { 1,3 };
//
//	cout << s.splitArraySameAverage(v);
//
//
//	
//
//}
//
//
