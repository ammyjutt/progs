//#include <iostream> 
//#include <vector>
//#include <unordered_map>
//
//
//using namespace std;
//
//
//
//class Solution {
//public:
//    int subarraysWithKDistinct(vector<int>& nums, int k) {
//
//        if (k == 1)
//        {
//            int ans = 0;
//            int n = nums.size();
//
//            for (int i = 0; i < n; )
//            {
//                int j = i + 1; 
//                while (j < n and nums[j] == nums[i])
//                    j++;
//
//                int len = j - i;
//
//                ans += (len) * (len + 1) / 2;
//                i = j;
//            }
//            return ans;
//        }
//
//
//
//        vector<int> with_k = fillArray(nums, k);
//        vector<int> with_k_minus_one = fillArray(nums, k - 1);
//        int ans = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (with_k[i] != -1)
//            {
//                ans += with_k_minus_one[i] - with_k[i];
//            }
//        }
//        return ans;
//    }
//
//
//
//
//    vector<int> fillArray(vector<int>& nums, int k)
//    {
//
//        unordered_map<int, int> mp;
//
//        int len_nums = nums.size();
//        int current_k = 0;
//        vector<int> indices_on_left(len_nums);
//
//        int left = 0;
//        int right = 0; // exc
//        // 1,2,1,2,3
//        while (right <= len_nums)
//        {
//            if (current_k < k)
//            {
//                if (right == len_nums)
//                {
//                    nums[right - 1] = -1;
//                    break;
//                }
//
//                indices_on_left[right] = -1; 
//                mp[nums[right]] += 1;
//                if (mp[nums[right]] == 1)
//                    current_k++;
//                right++;
//            }
//            else if (current_k > k)
//            {
//                mp[nums[left]] -= 1;
//                if (mp[nums[left]] == 0)
//                    current_k--;
//                left++;
//            }
//            else
//            {
//                indices_on_left[right-1] = left;
//
//                if (right == len_nums)
//                    break;
//
//                mp[nums[right]] += 1;
//
//                if (mp[nums[right]] == 1)
//                    current_k++;
//
//                right++;
//            }
//        }
//        
//
//        return indices_on_left;
//    }
//
//
//
//
//
//};
//
//
//
//
//int main()
//{
//    Solution s;
//
//    vector<int> v = { 1,2,2 };
//    cout << s.subarraysWithKDistinct(v, 1) << endl;
//
//
//}
//
//
//
