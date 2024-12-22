//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//bool cmp(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b)
//{
//	if (a.first.first == b.first.first)
//	{
//		return a.first.second > b.first.second;
//	}
//	return a.first.first < b.first.first;
//}
//
//int main()
//{
//	int n; cin >> n;
//	vector<pair<pair<int,int>,int>> v(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int l, r; cin >> l >> r;
//		v[i] = { {l,r},i+1 };
//	}
//	sort(v.begin(), v.end(), cmp);
//
//
//
//	for (int i = 1; i < n; i++)
//	{
//		if (v[i].first.second <= v[i - 1].first.second)
//		{
//			cout << v[i].second << " " << v[i - 1].second << endl;
//			return 0;
//		}
//	}
//	cout << -1 << " " << -1 << endl;
//}
//
