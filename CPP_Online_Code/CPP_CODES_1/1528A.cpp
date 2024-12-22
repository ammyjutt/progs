//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//#define left first
//#define right second
//
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n; 
//
//
//		// n pairs 
//		vector<pair<int, int>> range(n+1); 
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> range[i].left;
//			cin >> range[i].right; 
//		}
//
//		// n-1 pairs
//		vector<vector<int>> graph(n + 1);
//		for (int i = 1;i <= n - 1; i++)
//		{
//			int u, v; cin >> u >> v; 
//			graph[u].push_back(v);
//			graph[v].push_back(u);
//		}
//
//
//
//		vector<pair<long long ,long long>> dp(n + 1);
//
//
//		function<void(int,int)> dfs; 
//
//		dfs = [&](int parent,int node)->void
//		{
//			if (graph[node].size() == 1 and graph[node][0] == parent)
//			{
//				dp[node].left = 0; 
//				dp[node].right = 0;
//				return;
//			}
//
//			for (auto& nbr : graph[node])
//			{
//				if (nbr != parent)
//				{
//					dfs(node, nbr);
//				}
//			}
//
//			long long left_ans_cur = 0;
//
//			for (auto& nbr : graph[node])
//			{
//				if (nbr != parent)
//				{
//					long long one = abs(range[node].left - range[nbr].left) + (dp[nbr].left);
//					long long two = abs(range[node].left - range[nbr].right) + (dp[nbr].right);
//					left_ans_cur += max(one, two);
//				}
//			}
//
//			long long right_ans_cur = 0; 
//
//			for (auto& nbr : graph[node])
//			{
//				if (nbr != parent)
//				{
//					long long one = abs(range[node].right - range[nbr].left) + (dp[nbr].left);
//					long long two = abs(range[node].right - range[nbr].right) + (dp[nbr].right);
//					right_ans_cur += max(one, two);
//				}
//			}
//
//			dp[node].left = left_ans_cur;
//			dp[node].right = right_ans_cur;
//		};
//
//
//
//		dfs(-1,1);
//
//		cout << max(dp[1].left, dp[1].right) << endl;
//	}
//}
//
//
