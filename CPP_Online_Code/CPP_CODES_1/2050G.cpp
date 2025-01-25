//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
// // TODO: Fix
//
//int main()
//{
//
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<vector<int>> graph(n + 1);
//		for (int i = 1; i <= n - 1; i++)
//		{
//			int u, v;
//			cin >> u >> v;
//			graph[u].push_back(v);
//			graph[v].push_back(u);
//		}
//
//
//		long long ans = 0;
//
//		function<long long(int, int)> fun;
//
//		fun = [&](int node, int p)->long long
//			{
//				long long num_children = graph[node].size() - (p == -1 ? 0 : 1);
//				if (num_children == 0)
//					return 0;
//
//				int one = 0;
//				int two = 0;
//
//				for (auto& nbr : graph[node])
//				{
//					if (nbr != p)
//					{
//						int cur = fun(nbr, node);
//						two = max(cur, two);
//						if (two > one)
//							swap(one, two);
//					}
//				}
//
//
//
//				if (num_children >= 2)
//				{
//					long long dpath = one + two + (num_children - 2) + (p == -1 ? 0 : 1);
//					ans = max(ans, dpath);
//				}
//
//				ans = max(ans, (long long)graph[node].size());
//
//				long long lin_path = num_children;
//				lin_path = max(lin_path, num_children - 1 + one);
//
//				return lin_path;
//		};
//
//
//		ans = max(ans,fun(1, -1));
//
//		cout << ans << endl;
//	}
//
//}
//

