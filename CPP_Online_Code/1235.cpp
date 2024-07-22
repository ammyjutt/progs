//using namespace std;
//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//
//class Solution {
//public:
//    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//
//
//        int n = startTime.size();
//        vector< tuple<int, int, int> > jobs(n);
//
//        for (int i = 0; i < n; i++)
//        {
//            jobs[i] = make_tuple(endTime[i], startTime[i], profit[i]);
//        }
//
//
//        sort(jobs.begin(), jobs.end());
//        vector<int> dp(n + 1);
//        dp[0] = 0;
//
//        for (int i = 1; i <= n; i++)
//        {
//
//            int endTime = get<0>(jobs[i-1]);
//            int startTime = get<1>(jobs[i-1]);
//            int profit = get<2>(jobs[i-1]);
// 
//            int last_non_overlapping_ix = upper_bound(jobs.begin(), jobs.end(), startTime, [](int target, auto& job) {return target < get<0>(job);  }) - jobs.begin();
//            
//            dp[i] = max(dp[i - 1], profit + dp[last_non_overlapping_ix]);
//
//        }
//
//
//        return dp[n];
//    }
//};
//
//
//int main()
//{
//	Solution s;
//
//
//}
//
//
