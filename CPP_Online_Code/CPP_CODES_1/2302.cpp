//using namespace std;
//#include <vector>
//#include <iostream>
//
//
//class Solution {
//public:
//    long long countSubarrays(vector<int>& nums, long long k) {
//
//        int len_nums = nums.size();
//        int left = 0;
//        int right = 0;
//        long long sum = nums[0];
//        int ans = 0;
//        // 1,1,1
//        while (right < len_nums)
//        {
//            int subarray_len = right - left + 1;
//            if (sum * (long long)subarray_len < k)
//            {
//                ans += (subarray_len);
//                right++;
//                if(right < len_nums)
//                    sum += nums[right];
//            }
//            else {
//                sum -= nums[left];
//                left++;
//            }
//        }
//
//        return ans;
//
//    }
//};
//
//
//
//
