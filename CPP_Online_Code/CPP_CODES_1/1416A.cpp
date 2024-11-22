//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//bool cmp(pair<int, int>& a, pair<int, int>& b)
//{
//	if(a.second != b.second)
//		return a.second < b.second ;
//	return a.first < b.first;
//}
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		// 1 2 3 4 5
//		
//		vector<int> lastly_viewed_at(n+1,-1);
//		vector<int> least_win(n+1,-1);
//		vector<int> ans(n + 1, -1);
//		vector<int> v(n);
//
//		for (int i = 0; i < n; i++)
//		{
//			int num; cin >> num;
//			v[i] = num;
//
//			least_win[num] = max(least_win[num], i - lastly_viewed_at[num]);
//			lastly_viewed_at[num] = i;
//		}
//
//		for (int i = 0; i<n; i++)
//		{
//			int num = v[i];
//			least_win[num] = max(least_win[num], (n - 1) - (lastly_viewed_at[num]-1));
//		}
//		
//		// 1 2 3 4 5
//
//		for (int num = 1; num <= n; num++)
//		{
//			if (least_win[num] == -1)
//				continue;
//
//			int ix = least_win[num];
//			while (ix <= n and ans[ix] == -1)
//			{
//				ans[ix] = num;
//				ix++;
//			}
//		}
//
//
//		for (int i = 1; i <= n; i++)
//			cout << ans[i] << " ";
//		cout << endl;
//	}
//
//
//
//}
//
//
