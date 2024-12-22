//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
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
//		vector<int> graph(n + 1);
//		vector<bool> being_directed(n + 1, false);
//
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> graph[i];
//			being_directed[graph[i]] = true;
//		}
//
//		vector<bool> vis(n + 1, false);
//
//		function<bool(int)> dfs;
//
//		dfs = [&](int node)->bool
//			{
//				if (vis[graph[node]] == true)
//				{
//					if (graph[graph[node]] != node)
//						return false;
//					else
//						return true;
//				}
//				vis[graph[node]] = true;
//				return dfs(graph[node]);
//			};
//
//
//
//		int cycle_count = 0;
//		int open_to_merging = 0;
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (!being_directed[i] and !vis[i])
//			{
//				vis[i] = true;
//				if (dfs(i) == true)
//					open_to_merging++;
//			}
//		}
//
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (!vis[i])
//			{
//				if (graph[graph[i]] == i)
//					open_to_merging++;
//				else
//					cycle_count++;
//
//				dfs(i);
//			}
//		}
//
//		cout << cycle_count + ((open_to_merging > 0) ? 1:0) << " " << cycle_count + open_to_merging << endl;
//	}
//}
//
//
