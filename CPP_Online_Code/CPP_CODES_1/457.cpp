//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//class Solution {
//public:
//    bool circularArrayLoop(vector<int>& nums) {
//        int n = nums.size();
//
//        vector<bool> visited(n, false);
//
//
//        for (int i = 0; i < n; i++)
//        {
//
//            if (visited[i])
//                continue;
//
//            visited[i] = true;
//            bool is_positive = nums[i] > 0;
//
//            int fast = i;
//            int slow = i;
//            int steps_taken_by_slow = 0;
//
//            do {
//
//                if ((is_positive) ^ (nums[fast] > 0))
//                    break;
//
//                fast = ((fast + nums[fast]) + n) % n;
//
//                if ((is_positive) ^ (nums[fast] > 0))
//                    break;
//
//                fast = ((fast + nums[fast]) + n) % n;
//                slow = ((slow + nums[slow]) + n) % n;
//
//                steps_taken_by_slow += 1;
//
//                visited[slow] = true;
//
//            } while (fast != slow and steps_taken_by_slow < 2*n);
//
//            if (fast == slow and (fast != (fast+nums[fast]+n)%n))
//                return true;
//
//        }
//
//        return false;
//    }
//};
//
//
//
//int main()
//{
//
//    vector<int> v = { -2,-3,-9 };
//    Solution s; 
//    cout << s.circularArrayLoop(v) << endl;
//
//
//}
//
//
//
//
//
//
