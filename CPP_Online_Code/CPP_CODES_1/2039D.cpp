//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//
//
//int main()
//{
//
//	int t; cin >> t; 
//	while (t--)
//	{
//
//		int n, m;  cin >> n >> m;
//
//
//		vector<int> st(m);
//
//		for (auto& i : st)
//			cin >> i;
//
//
//		vector<int> ans(n + 1);
//		vector<unordered_set<int>> big_v(n + 1);
//
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			// place here 
//			int ix = m - 1;
//			while (ix > -1 and big_v[i].count(st[ix]) != 0)
//				ix--;
//
//
//			if (ix == -1)
//				break;
//
//			ans[i] = st[ix];
//
//			int ii = i + i;
//			while (ii <= n)
//			{
//				big_v[ii].insert(st[ix]);
//				ii += i;
//			}
//
//		}
//
// 
//		if (i == n+1)
//		{
//			for (int j = 1; j <= n;j++)
//				cout << ans[j] << " ";
//			cout << endl;
//		}
//		else
//		{
//			cout << -1 << endl;
//		}
//	}
//}
//
//
