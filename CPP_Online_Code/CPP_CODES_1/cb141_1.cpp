//
//#include <iostream>
//
//#include <vector>
//using namespace std;
//
//
//
//
//class Solution {
//public:
//    vector<int> minBitwiseArray(vector<int>& nums) {
//
//        int len_nums = nums.size();
//        vector<int> ans(len_nums);
//
//        for (int i=0; i<len_nums; i++)
//        {
//            ans[i] = -1;
//            for (int j = 1; j < nums[i] ; j++)
//            {
//                if ((j | j + 1) == nums[i])
//                {
//                    ans[i] = j;
//                    break;
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//
//
