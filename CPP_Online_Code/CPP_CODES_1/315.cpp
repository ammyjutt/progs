//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//void build(vector<int>& T, int rl, int rr)
//{
//    int n = rr - rl + 1;
//    T = vector<int>(n * 4, 0);
//}
//
//
//void update(vector<int>& T, int nodeIdx, int rl, int rr, int pos)
//{
//    // rl : range left 
//    // rr : range right 
//    if (rl == rr)
//    {
//        T[nodeIdx] += 1;
//        return;
//    }
//
//    int mid = rl + (rr - rl) / 2;
//    if (pos <= mid)
//    {
//        update(T, nodeIdx * 2, rl, mid, pos);
//    }
//    else
//    {
//        update(T, nodeIdx * 2 + 1, mid + 1, rr, pos);
//    }
//    T[nodeIdx] = T[nodeIdx * 2] + T[nodeIdx * 2 + 1];
//}
//
//
//int query(vector<int>& T, int nodeIdx, int rl, int rr, int ql, int qr)
//{
//    if (ql > qr)
//    {
//        return 0;
//    }
//
//    if (rl == ql and rr == qr)
//    {
//        return T[nodeIdx];
//    }
//
//    int mid = rl + (rr - rl) / 2;
//    return query(T, nodeIdx * 2, rl, mid, ql, min(mid, qr))
//        +  query(T, nodeIdx * 2 + 1, mid + 1, rr, max(mid+1, ql), qr);
//
//}
//
//
//class Solution {
//public:
//    vector<int> countSmaller(vector<int>& nums) {
//        vector<int> T;
//
//        int maxx = *(max_element(nums.begin(), nums.end()));
//        int minn = *(min_element(nums.begin(), nums.end()));
//
//        build(T, minn, maxx);
//
//
//        int len_nums = nums.size();
//        vector<int> ans(len_nums);
//        
//        
//
//        for (int i = len_nums - 1; i >= 0; i--)
//        {
//            ans[i] = query(T, 1, minn, maxx, minn, nums[i] - 1);
//            update(T, 1, minn, maxx, nums[i]);
//        }
//        return ans;
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
//    vector<int> v = { 5,2,6,1 };
//
//
//
//    for (auto item : s.countSmaller(v)) {
//        cout << item << endl;
//    }
//
//
//
//}
//
//
//
//
