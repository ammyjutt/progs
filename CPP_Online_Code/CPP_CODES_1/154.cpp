//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
// 
//class Solution {
//public:
//
//    int findMin(vector<int>& nums) {
//
//        function<int(int, int)> search;
//        int len_nums = nums.size();
//
//        search = [&](int left, int right) -> int
//            {
//                if (left > right) return INT_MAX;   
//                while (left < right)
//                {
//                    int mid = left + (right - left) / 2;
//
//                    if (nums[left] < nums[right])
//                        return nums[left];
//
//                    if (nums[left] == nums[mid] && nums[mid] == nums[right])
//                    {
//                        return min(search(left, mid), search(mid + 1, right));
//                    }
//                    if (nums[left] > nums[mid])
//                    {
//                        right = mid;
//                    }
//                    else
//                    {
//                        left = mid + 1;
//                    }
//                }
//                return nums[left];
//            };
//
//        return search(0, len_nums - 1);
//
//    }
//};
//
//
//
//
//int main()
//{
//    Solution s; 
//    vector<int> nums = { 10,1,10,10 ,10};
//    cout << s.findMin(nums) << endl;
//}
//
