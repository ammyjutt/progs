//#include <iostream>
//using namespace std;
//#include <vector>
//
//
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n, m; cin >> n >> m;
//		
//		vector<pair<int, int>> segs(m);
//
//		for (auto& p : segs)
//		{
//			cin >> p.first >> p.second;
//		}
//		
//		int q; cin >> q;
//		vector<int> qs(q);
//
//		for (auto& q : qs) {
//			cin >> q;
//		}
//
//		auto bin = [&](int mid) -> bool
//			{
//				vector<int> pre(n + 1, 0);
//				for (int i = 0; i < min(mid,q); i++)
//				{
//					pre[qs[i]] += 1;
//				}
//				for (int i = 1; i <= n; i++)
//					pre[i] += pre[i - 1];
//
//				for (auto& p : segs)
//				{
//					if ((p.second - p.first + 1)/2 < (pre[p.second] - pre[p.first - 1]))
//						return true;
//				}
//
//				return false;
//			};
//
//
//
//		int l = 1;
//		int r = n+1; 
//		bool last_returned = true;
//
//		while (l < r)
//		{
//			int mid = l + (r - l) / 2;
//			if ((last_returned = bin(mid)) == false)
//			{
//				l = mid + 1;
//			}
//			else
//			{
//				r = mid;
//			}
//		}
//				
//		if (l == n + 1)
//			cout << -1 << endl;
//		else
//			cout << l << endl;
//
//	}
//
//}
//
//
