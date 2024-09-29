//using namespace std;
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <deque>
//
//
//
//class Solution {
//public:
//    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
//        deque<pair<int, int>> q;
//        int len_points = points.size();
//
//        q.push_back({points[0][0], points[0][1]});
//        int ans = INT_MIN;
//
//        for (int j = 1; j < len_points; j++)
//        {
//            while (!q.empty() and ((points[j][0] - q.front().first) > k))
//                q.pop_front();
//
//            if (! q.empty())
//            {
//                int cur_ans = q.front().second + points[j][1] + points[j][0] - q.front().first;
//                ans = max(ans, cur_ans);
//
//                while (!q.empty() and ((q.back().second - q.back().first) <= (points[j][1] - points[j][0])))
//                {
//                    q.pop_back();
//                }
//            }
//            q.push_back({ points[j][0], points[j][1] });
//        }
//        return ans;
//    }
//};
//
