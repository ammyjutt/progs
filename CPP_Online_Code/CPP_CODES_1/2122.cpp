//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//class Solution {
//public:
//    vector<int> recoverArray(vector<int>& nums) {
//
//        sort(nums.begin(), nums.end());
//     
//
//        int len_nums = nums.size();
//        for (int i = 1; i < len_nums; i++)
//        {
//            int k = nums[i] - nums[0];
//
//            if (k % 2 == 1 || k == 0)
//                continue;
//
//            int found = 0;
//            unordered_map<int, int> mp;
//
//            for (int j = 0; j < len_nums; j++)
//            {
//                int lower = nums[j] - k;
//                if (mp[lower]>0)
//                {
//                    found++;
//                    mp[lower] -= 1;
//                }
//                else {
//                    mp[nums[j]] = mp[nums[j]] + 1;
//                }
//            }
//
//
//            if (found == len_nums / 2)
//            {
//                vector<int> ans;
//                for (int j = 0; j < len_nums; j++)
//                {
//                    int lower = nums[j] - k;
//                    if (mp[lower] > 0)
//                    {
//                        found++;
//                        mp[lower] -= 1;
//                        ans.push_back(nums[j] - (k / 2));
//                    }
//                    else {
//                        mp[nums[j]] = mp[nums[j]] + 1;
//                    }
//                }
//                return ans;
//            }
//
//
//        }
//
//
//
//    }
//};
//
//
//
//
