//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <stack>
//#include <set>
//
//
//
//
//struct CompareIndices {
//
//    vector<int>& arr;
//    CompareIndices(vector<int>& array) : arr(array) {}
//
//
//    bool operator()(const int& i, const int& j) const
//    {
//        return arr[i] < arr[j];
//    }
//
//
//};
//
//
//
//class Solution {
//public:
//    vector<int> secondGreaterElement(vector<int>& nums) {
//
//        int n = nums.size();
//        stack<int> st;
//        
//        vector<int> ans(n, -1);
//
//        CompareIndices cmp(nums);
//        multiset<int, CompareIndices> bst(cmp); // Pass the comparator instance
//
//
//
//        for (int i = 0; i < n; i++)
//        {
//
//            auto lower_bound_it = bst.lower_bound(i);
//
//            for (auto it = bst.begin(); it != lower_bound_it and (not bst.empty());)
//            {
//                ans[*it] = nums[i];
//                it = bst.erase(it);
//            }
//
//
//            while (!st.empty() and (nums[i] > nums[st.top()] ))
//            {
//                bst.insert(st.top());
//                st.pop();
//            }
//            st.push(i);
//
//
//                        
//        }
//        return ans;
//
//    }
//};
//
//
//
//
//int main()
//{
//
//    Solution s;
//
//    vector<int> arr = { 6,6,14,11};
//
//    vector<int> ans = s.secondGreaterElement(arr);
//
//    for (auto it : ans)
//        cout << it << endl;
//
//
//}
//
