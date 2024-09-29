//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//class Solution {
//public:
//    long long minimumOperations(vector<int>& nums, vector<int>& target) {
//        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//        long long ans = abs(nums[0] - target[0]);
//
//        for (int i = 1; i < nums.size(); i++)
//        {
//            int cur = nums[i] - target[i];
//            int prev = nums[i - 1] - target[i - 1];
//
//
//            if ((cur > 0 and prev < 0) || (cur < 0 and prev > 0))
//            {
//                ans += abs(cur);
//            }
//            else {
//                ans += max(abs(cur) - abs(prev), 0);
//            }
//
//
//        }
//        return ans;
//    }
//};

