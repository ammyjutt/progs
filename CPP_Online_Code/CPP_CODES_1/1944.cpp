//#include <iostream>
//#include <vector>
//#include <map>
//#include <stack>
//using namespace std;
//// TODO 
//
//
//class Solution {
//public:
//    vector<int> canSeePersonsCount(vector<int>& heights) {
//
//        int n = heights.size();
//
//        vector<int> ans(n);
//        stack<int> st;
//
//        for (int i = n - 1; i >= 0; i--)
//        {
//            int currents_ans = 0;
//            while (not st.empty() and heights[i] > st.top())
//            {
//                currents_ans += 1;
//                st.pop();
//            }
//
//            if (not st.empty())
//                currents_ans += 1;
//
//            st.push(heights[i]);
//            ans[i] = currents_ans;
//        }
//        
//
//        return ans;
//    }
//};
//
//
//int main()
//{
//
//    vector<int> v = { 2,3,1,1,4 };
//    Solution s;
//    
//
//}
//
//
//
