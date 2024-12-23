//using namespace std;
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <functional>
//
//
//
// //// TODO: WHY TLE ? 
//
//
//
//int main()
//{
//	cin.tie(0)->sync_with_stdio(0);
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n; 
//
//		unordered_map<long long, vector<long long>> graph;
//
//		for (int i = 1; i <= n; i++)
//		{
//			long long temp; cin >> temp; 
//			long long len = (i - 1) + temp;
//			if (len >= n and i > 1)
//			{
//				graph[len].push_back(len + (i - 1));
//			}
//		}
//
//
//		function<void(long long pos)> fun; 
//
//		unordered_map<long long, long long> ans; 
//
//		fun = [&](long long pos)->void
//			{
//				if (ans.find(pos) != ans.end())
//				{
//					return;
//				}
//
//				if (graph[pos].size() == 0)
//				{
//					ans[pos] = pos;
//					return;
//				}
//
//				for (auto& nbr : graph[pos])
//				{
//					fun(nbr);
//					ans[pos] = max(ans[pos], ans[nbr]);
//				}
//			};
//
//
//		fun(n); 
//
//		cout << ans[n] << endl;
//	}
//}
//
//
