//using namespace std;
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//
//bool cmp(int& a, int& b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n;
//		vector<int> w(n+1);
//		long long ans = 0;
//		vector<bool> should_insert(n+1, false);
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> w[i];
//			ans += w[i];
//		}
//		vector<int> to_sort;
//		for (int i = 0; i < n - 1; i++)
//		{
//			int u; cin >> u;
//			int v; cin >> v;
//			if (should_insert[u] == true)
//			{
//				to_sort.push_back(w[u]);
//			}
//			else
//			{
//				should_insert[u] = true;
//			}
//
//			if (should_insert[v] == true)
//			{
//				to_sort.push_back(w[v]);
//			}
//			else
//			{
//				should_insert[v] = true;
//			}
//		}
//		sort(to_sort.begin(), to_sort.end(), cmp);
//
//
//
//		cout << ans << " ";
//		for (int i = 2; i <= n - 1; i++)
//		{
//			ans += to_sort[i-2];
//			cout << ans << " ";
//		}
//		cout << endl;
//	}
//}
//
