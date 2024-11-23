//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//int main()
//{
//	int n; cin >> n;
//
//	if (n & 1)
//	{
//		cout << -1 << endl;
//		
//	}
//	else
//	{
//		vector< vector<int> > graph(n + 1);
//
//		for (int i = 0; i < n - 1; i++)
//		{
//			int u; int v;
//			cin >> u >> v;
//			graph[u].push_back(v);
//			graph[v].push_back(u);
//
//		}
//
//		function<int(int,int)> dfs;
//
//		long long ans = 0;
//
//		dfs = [&](int parent,int node)->int
//			{
//				
//				int subtree_size = 1;
//				for (auto& nbr : graph[node])
//				{
//					if (nbr != parent)
//						subtree_size += dfs(node, nbr);
//				}
//				if (subtree_size % 2 == 0)
//					ans += 1;
//				return subtree_size;
//			};
//
//		dfs(-1, 1);
//		cout << ans - 1 << endl;
//	}
//}
//
//
//
//
