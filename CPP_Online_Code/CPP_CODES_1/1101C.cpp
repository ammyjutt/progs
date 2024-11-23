//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
//
//
//bool cmp(pair<pair<int,int>,int>& a , pair<pair<int,int>,int>& b)
//{
//	if (a.first.first == b.first.first)
//		return a.first.second < b.first.second;
//	return a.first.first < b.first.first;
//}
//
//
//
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector< pair<pair<int, int>,int>> v;
//
//		for (int i = 0; i < n; i++)
//		{
//			int l, r;
//			cin >> l >> r;
//			v.push_back({ {l,r},i });
//		}
//
//		sort(v.begin(), v.end(), cmp);
//
//
//
//		int v_idx = 0;
//		pair<int, int> current = v[v_idx++].first;
//		int count_ones = 0;
//
//
//		while (v_idx < n)
//		{
//			pair<int, int> next = v[v_idx].first;
//			if (next.first > current.second)
//			{
//				break;
//			}
//			v_idx++;
//			count_ones++;
//
//			if (next.second > current.second)
//				current = next;
//		}
//
//		if (v_idx == n)
//		{
//			cout << -1 << endl;
//		}
//
//		else
//		{
//			vector<bool> ans(n);
//
//			for (int i = 0; i < n; i++)
//			{
//				if (i <= count_ones)
//				{
//					ans[v[i].second] = true;
//				}
//				else
//				{
//					ans[v[i].second] = false; // 0 means 2
//				}
//			}
//
//			for (int i = 0; i < n; i++)
//			{
//				cout << ((ans[i] == true) ? 1 : 2);
//				cout << " ";
//			}
//			cout << endl;
//		}
//	}
//}
//
//
