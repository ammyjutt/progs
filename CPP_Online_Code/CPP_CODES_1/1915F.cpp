//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//
//
//bool sorter(const pair<int, int>& a, const pair<int, int>& b) 
//{
//	return a.first < b.first;
//}
//
//int main()
//{
//	short int t; 
//	cin >> t;
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<pair<int, int>> v;
//
//		while (n--)
//		{
//			int a; int b;
//			cin >> a >> b;
//			v.push_back({ a,b });
//		}
//
//		sort(v.begin(), v.end(), sorter);
//
//		multiset<int> mset;
//		mset.insert(v[0].second);
//		int ans = 0;
//		
//		n = v.size();
//		for (int i = 1; i < n; i++)
//		{
//			auto it = mset.lower_bound(v[i].second);
//			ans += distance(it, mset.end());	
//			mset.insert(v[i].second);
//		}
//		cout << ans << endl;
//	}
//}
//
//
//
//
//
//
//
//
//
