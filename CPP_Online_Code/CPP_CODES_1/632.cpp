//using namespace std;
//#include <iostream>
//#include <vector>
//#include <queue>
//
//
//class Solution {
//public:
//    vector<int> smallestRange(vector<vector<int>> nums) {
//
//        int num_arrays = nums.size();
//
//
//        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>> > pq;
//        
//        int mexx = INT_MIN;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            pq.push({ nums[i][0], i });
//            mexx = max(nums[i][0], mexx);
//        }
//        vector<int> _ans = { -1000000, 1000000 };
//
//        vector<int> _index(num_arrays,0);
//
//        while (true)
//        {
//            pair<int,int> top_pair = pq.top();
//            pq.pop();
//            if (mexx - top_pair.first < _ans[1] - _ans[0])
//            {
//                _ans = { top_pair.first , mexx };
//            }
//            _index[top_pair.second]++;
//            if (_index[top_pair.second] == nums[top_pair.second].size())
//                break;
//            pq.push({ nums[top_pair.second][_index[top_pair.second]], top_pair.second });
//
//            mexx = max(mexx, nums[top_pair.second][_index[top_pair.second]]);
//        } 
//        return _ans;
//    }
//};
//
//
//
//int main()
//{
//    Solution s;
//    vector<int> v = { 1,3 };
//    s.smallestRange({ v });
//}
//
//
