//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//class Solution {
//public:
//    int findMaximumLength(vector<int>& nums) {
//        int n = nums.size(); // Number of elements in nums
//
//        // f represents the maximum length ending at position i
//        vector<int> f(n + 1, 0);
//
//        // pre records the furthest position that can be reached from the current position
//        vector<int> pre(n + 2, 0);
//
//        // Prefix sums of nums, with s[0] initialized to 0 for easier calculations
//        vector<long long> prefix_sum(n + 1, 0);
//        for (int i = 0; i < n; ++i) {
//            prefix_sum[i + 1] = prefix_sum[i] + nums[i];
//        }
//
//        // Iterate through positions of the array
//        for (int i = 1; i <= n; ++i) {
//            // Update the furthest reachable position for the current position i
//            pre[i] = std::max(pre[i], pre[i - 1]);
//
//            // Update the maximum length at position i
//            f[i] = f[pre[i]] + 1;
//
//            // Find the new furthest position that can be reached where the sum is doubled of segment up to i
//            int new_position = std::lower_bound(prefix_sum.begin(), prefix_sum.end(),
//                prefix_sum[i] * 2 - prefix_sum[pre[i]]) - prefix_sum.begin();
//
//            // Update the furthest reachable index for the new position
//            pre[new_position] = i;
//        }
//
//        // Return the maximum length at the last position which is the answer to the problem
//        return f[n];
//    }
//};
//
//
//
//
//int main()
//{
//
//    vector<int> v = { 4,3,2,6 };
//
//    Solution s;
//    cout << s.findMaximumLength(v) << endl;
//
//	return 0;
//}
