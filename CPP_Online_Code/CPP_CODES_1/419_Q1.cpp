//
//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <unordered_map>
//#include <queue>
//
//
//struct cmp {
//
//
//    bool operator()(pair<int, int>& a, pair<int, int>& b)
//    {
//        if (a.first == b.first)
//            return a.second < b.second;
//        return a.first < b.first;
//
//    }
//
//};
//
//
//
//
//class Solution {
//public:
//    vector<int> findXSum(vector<int>& nums, int k, int x) {
//
//        unordered_map<int, int> mp;
//        int len_nums = nums.size();
//
//        for (int i = 0; i < min(k,len_nums); i++)
//        {
//            mp[nums[i]] += 1;
//        }
//
//        vector<int> ans;
//
//        // 1,1,2,2,3,4,2,3
//
//
//        for (int i = 0; i <  len_nums - k + 1; i++)
//        {
//            priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//            for (const auto& pair : mp)
//            {
//                pq.push({ pair.second, pair.first });
//            }
//
//            int sum = 0;
//
//            for (int i = 0; i < x and !pq.empty(); i++)
//            {
//                sum += (pq.top().second * pq.top().first);
//                pq.pop();
//            }
//
//            ans.push_back(sum);
//
//
//            mp[nums[i]] -= 1;
//
//            if (mp[nums[i]] == 0)
//                mp.erase(nums[i]);
//            
//            if (i + k < len_nums)
//                mp[nums[i + k]] += 1;
//        }
//
//        return ans;
//
//    }
//};
//
//
//int main()
//{
//
//
//    Solution s;
//    vector<int> v = { 9,5,8 };
//
//
//
//    vector<int> ans =  s.findXSum(v, 2, 1);
//
//    cout << "yes" << endl;
//
//}
