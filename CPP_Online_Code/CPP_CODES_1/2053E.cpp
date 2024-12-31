//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<vector<int>> graph(n+1);
//
//
//		for (int i = 1; i <= n - 1; i++)
//		{
//			int u, v; cin >> u >> v; 
//			graph[u].push_back(v);
//			graph[v].push_back(u);
//		}
//
//
//		vector<int> minn(n, INT_MAX);
//
//
//		queue<int> q1; 
//		queue<int> q2;
//
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (graph[i].size() == 1)
//			{
//				q1.push(i); 
//				q2.push(i);
//				minn[i-1] = 0;
//			}
//		}
//
//		while (!q1.empty())
//		{
//			int level_size = q1.size(); 
//
//			while (level_size--)
//			{
//				int node = q1.front(); q1.pop(); 
//
//				for (auto& nbr : graph[node])
//				{
//					if (minn[nbr-1] == INT_MAX)
//					{
//						minn[nbr-1] = minn[node-1] + 1;
//						q1.push(nbr);
//					}
//				}
//			}
//		}
//
//
//
//
//
//
//		while (!q2.empty())
//		{
//			int level_size = q2.size();
//
//			while (level_size--)
//			{
//				int node = q2.front(); q2.pop();
//
//				for (auto& nbr : graph[node])
//				{
//					if (minn_2[nbr - 1] == INT_MAX)
//					{
//						
//						q2.push(nbr);
//					}
//				}
//			}
//		}
//
//
//
//
//
//
//
//
//
//
//
//		sort(minn.begin(), minn.end());
//
//
//		long long ans = 0; 
//
//		for (int i = 0; i < n; i++)
//		{
//			int ix = upper_bound(minn.begin(), minn.end(), minn[i]) - minn.begin();
//			ans += (n - ix);
//		}
//		cout << ans << endl;
//	}
//}
//
//
//
