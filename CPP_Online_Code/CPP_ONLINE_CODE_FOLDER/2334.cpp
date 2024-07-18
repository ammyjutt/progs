//using namespace std;
//#include <iostream>
//#include <vector>
//#include <stack>
//
//
//
//
//class Solution {
//public:
//    int validSubarraySize(vector<int>& nums, int threshold) {
//
//        stack<int> st;
//
//        int len_nums = nums.size();
//        vector<int> left_smaller_ix(len_nums);
//        vector<int> right_smaller_ix(len_nums);
//
//        for (int i = 0; i < len_nums; i++)
//        {
//            // new element 
//
//            // insert it
//            while (!st.empty() and nums[st.top()] > nums[i])
//            {
//                // pop 
//                int top_ix = st.top(); st.pop();
//
//                // set right smaller
//                right_smaller_ix[top_ix] = i;
//
//                // set left smaller
//                left_smaller_ix[top_ix] = (st.empty() ? -1 : st.top());
//            }
//            st.push(i);
//        }
//
//        // leftovers
//
//        while (not st.empty())
//        {
//            int top_ix = st.top(); st.pop();
//
//            // set right smaller
//            right_smaller_ix[top_ix] = len_nums;
//
//            // set left smaller
//            left_smaller_ix[top_ix] = (st.empty() ? -1 : st.top());
//        }
//
//              
//
//        for (int i = 0; i < len_nums; i++)
//        {
//            int k = right_smaller_ix[i] - 1 - left_smaller_ix[i];
//            if (nums[i] > double(threshold) / k)
//            {
//                return k;
//            }
//        }
//
//        return -1;
//    }
//};
//
//
//
//
//int main()
//{
//    Solution s;
//    vector<int> v = { 1,3,4,3,1 };
//    cout << s.validSubarraySize(v, 6);
//
//}
//
//
