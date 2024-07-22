//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
//
//class Solution {
//public:
//    int minAbsDifference(vector<int>& nums, int goal) {
//
//        int len_nums = nums.size();
//        int len_left_part = pow(2, (len_nums)/2);
//        int len_right_part = pow(2, len_nums - (len_nums) / 2);
//
//
//        vector<int> left_subsets(len_left_part); 
//        vector<int> right_subsets(len_right_part);
//
//
//        // produce left subsets 
//
//        int left_subsets_ix = 0;
//        left_subsets[left_subsets_ix++] = 0;
//
//        for (int i = 0; i < (len_nums) / 2; i++)
//        {
//            for (int j = left_subsets_ix-1 ; j >= 0; j--)
//            {
//                left_subsets[left_subsets_ix++] = nums[i] + left_subsets[j];
//            }
//        }
//
//        int right_subsets_ix = 0;
//        right_subsets[right_subsets_ix++] = 0;
//
//        for (int i = (len_nums) / 2; i < len_nums; i++)
//        {
//            for (int j = right_subsets_ix - 1; j >= 0; j--)
//            {
//                right_subsets[right_subsets_ix++] = nums[i] + right_subsets[j];
//            }
//        }
//
//        sort(right_subsets.begin(), right_subsets.end());
//
//        int ans = INT_MAX;
//
//        for (int i = 0; i < len_left_part; i++)
//        {
//            int target = goal - left_subsets[i];
//
//
//
//
//            int l = 0; int r = len_right_part;
//
//            while (l < r)
//            {
//                int mid = (l + r) / 2;
//                if (target > right_subsets[mid])
//                {
//                    l = mid + 1;
//                }
//                else
//                {
//                    r = mid;
//                }
//            }
//
//            if (l < len_right_part)
//            {
//                ans = min(ans, abs(target - right_subsets[l]));
//            }
//
//            if (l > 0)
//            {
//                ans = min(ans, abs(target - right_subsets[l - 1]));
//            }
//
//        }
//
//
//        return ans;
//    }
//};
//
//
//
//
//
//
//
//
//int main()
//{
//	Solution s;
//
//    vector<int> v = { -7933,-1642,-6137,6234,4728,5474,2439 };
//
//    cout << s.minAbsDifference(v, -428059487);
//
//
//}
//
//
