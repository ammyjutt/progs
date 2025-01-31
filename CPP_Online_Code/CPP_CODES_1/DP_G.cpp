//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <functional>
//
//
//int main()
//{
//
//	int n, m; cin >> n >> m; 
//
//	vector<vector<int>> graph(n + 1); 
//
//	unordered_set<int> st; 
//
//
//	for (int i = 1; i <= m; i++)
//	{
//		int u, v; 
//		cin >> u >> v; 
//		st.insert(v);
//		graph[u].push_back(v);
//	}
//
//
//	vector<int> dp(n + 500, -1);
//
//	function<int(int)> fun; 
//
//
//	fun = [&](int node)->int {
//
//		if (dp[node] != -1)
//			return dp[node];
//
//		int local_ans = 0;
//		for (auto& nbr : graph[node])
//		{
//			local_ans = max(local_ans,fun(nbr));
//		}
//		return dp[node] = 1 + local_ans;
//
//	};
//	
//
//
//	int ans = 0;
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (st.count(i) == 0)
//		{
//			ans = max(ans, fun(i));
//		}
//	}
//
//	cout << ans-1 << endl;
//
//}
//
//
//
//
