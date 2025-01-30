//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define ll long long
//
//template <class T> 
//class SegTree {
//
//	int n; 
//	vector<T> t; 
//
//public:
//
//	SegTree(vector<T>& v)
//	{
//		n = v.size(); 
//		t.resize(n * 2);
//
//		for (int i = 0; i < n; i++)
//		{
//			t[i + n] = v[i];
//		}
//
//		for (int i = n - 1; i >= 1; i--) {
//			t[i] = merge(t[i * 2], t[i * 2 + 1]);
//		}
//
//	}
//
//
//	void update(int pos, T val)
//	{
//		pos += n;
//		t[pos] = val;
//
//		while (pos > 0) // parent exists
//		{
//			pos /= 2; 
//			t[pos] = merge(t[pos * 2], t[pos * 2 + 1]);
//		}
//	}
//
//	T query(int l, int r)
//	{
//		l += n;
//		r += n; 
//		T res = 0;
//		while (l < r)
//		{
//			if (l % 2 == 1)
//				res = merge(res, t[l++]);
//			if (r % 2 == 0)
//				res = merge(res, t[r--]);
//			l >>= 1;
//			r >>= 1;
//		}
//		if (l == r)
//		{
//			res = merge(res, t[l]);
//		}
//		return res; 
//	}
//
//	T merge(T a, T b)
//	{
//		return max(a, b);
//	}
//};
//
//
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		int n = nums.size();
//		vector<int> sorted(nums.begin(), nums.end());
//		sort(sorted.begin(), sorted.end());
//		sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
//
//		
//
//
//		vector<int> dp(sorted.size(), 0);
//		SegTree<int> t(dp);
//		int ans = 0;
//		for (auto& ele : nums)
//		{
//			int rank = lower_bound(sorted.begin(), sorted.end(),ele) - sorted.begin();
//			dp[rank] = t.query(0, rank - 1) + 1;
//			t.update(rank, dp[rank]);
//			ans = max(dp[rank], ans);
//
//		}
//		return ans; 
//	}
//};
//












