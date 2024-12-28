//#include <iostream>
//using namespace std; 
//
//#include <vector>
//#include <unordered_map>
//
//
//
//
//int main()
//{
//	int t;cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		int lenn = n*2 + 1;
//		vector<long long> pre(lenn,0);
//
//		pre[0] = 0; 
//
//		vector<pair<int, int>> q;
//		unordered_map<long long, int> mp;
//		
//
//		for (int i = 1; i <= n; i++)
//		{
//			int l, r; cin >> l >> r; 
//			q.push_back(make_pair(l, r));
//
//			if (l == r)
//			{
//				pre[l] = 1; 
//				mp[l] += 1;
//			}
//
//		}
//
//
//		for (int i = 1; i < lenn; i++)
//		{
//			pre[i] += pre[i - 1];
//		}
//
//
//
//		for (int i = 0; i < n; i++)
//		{
//			int l = q[i].first; 
//			int r = q[i].second;
//
//			int summ = pre[r] - pre[l - 1];
//
//			if (l == r)
//			{
//				if (mp[l] == 1)
//					cout << "1";
//				else
//					cout << "0";
//			}
//			else
//			{
//				if (summ >= (r - l + 1))
//					cout << "0";
//				else
//					cout << "1";
//			}
//		}
//
//		cout << endl;
//	}
//}
//
//
//
//
//
