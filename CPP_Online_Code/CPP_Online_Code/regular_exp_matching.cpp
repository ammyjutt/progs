//#include <unordered_map>
//#include <string>
//#include <unordered_map>
//using namespace std;
//#include <iostream>
//
//class Solution {
//public:
//    long long minimumMoves(vector<int>& nums, int k, int maxChanges) {
//
//        vector<int> ones_indices;
//        int len_nums = nums.size();
//        
//
//        for (int i = 0; i < len_nums; i++)
//        {
//            if (nums[i] == 1)
//            {
//                ones_indices.push_back(i);
//              
//            }
//        }
//
//
//        int ans = INT_MAX;
//        int l = 0;
//        int r = 0;
//        int len_ones = ones_indices.size();
//
//        for (int i = 0; i < len_nums; i++)
//        {
//
//            
//            while ( l < len_ones and ones_indices[l] < i)
//                l++;
//            
//            if (l < len_ones and ones_indices[l] > i and l > 0)
//                l--;
//
//            if (l>0 and l<len_ones and i < ones_indices[l])
//                continue;
//
//
//            r = l + 1;
//
//            int l_copy = l;
//            
//            // { 1,1,0,0,0,1,1,0,0,1 };
//            // 0 0 0 0
//            // 0 1
//
//            int cost = 0;
//            int got = 0;
//            int changes_made = 0;
//
//            while (got < k)
//            {
//                
//                if (nums[i] == 1)
//                {
//                    nums[i] = 0;
//                    got++;
//                    l_copy--;
//                }
//                else {
//                    int l_cost = l_copy == -1 or l_copy >= len_ones ? INT_MAX : abs(i - ones_indices[l_copy]);
//                    int r_cost = r >= len_ones ? INT_MAX : abs(ones_indices[r] - i);
//
//                    if (l_cost == INT_MAX and r_cost == INT_MAX)
//                    {
//                        if (changes_made == maxChanges)
//                        {
//                            cost = INT_MAX;
//                            break;
//                        }
//                        changes_made++;
//                        cost += 2;
//                        got++;
//                    }
//                    else if (min(l_cost, r_cost) >= 2 and changes_made < maxChanges)
//                    {
//                        changes_made++;
//                        cost += 2;
//                        got++;
//                    }
//                    else if (l_cost < r_cost)
//                    {
//                        cost += l_cost;
//                        l_copy--;
//                        got++;
//                    }
//                    else
//                    {
//                        cost += r_cost;
//                        r++;
//                        got++;
//                    }
//                }
//            }
//
//
//            ans = min(ans, cost);
//
//
//        }
//
//
//        return ans;
//
//
//    }
//};
//
//
//
//int main()
//{
//    //vector<int> nums = { 1,1,0,0,0,1,1,0,0,1 };
//    //vector<int> nums = { 0,0,0,0 };
//    vector<int>  nums = { 0,1 };
//
//    Solution s;
//    cout << s.minimumMoves(nums, 1,0);
//
//
//}
//
//
//
//
