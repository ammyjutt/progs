//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//using ll = long long;
//const int MOD = 1e9 + 7;
//
//#define black_ans first
//#define white_ans second
//
//
//int main()
//{
//
//	int n; cin >> n; 
//	vector<vector<int>> graph(n + 1); 
//
//	for (int i = 1; i <= n-1; i++)
//	{
//		int u, v; cin >> u >> v; 
//		graph[u].push_back(v); 
//		graph[v].push_back(u);
//	}
//
//
//	function<pair<ll, ll>(int,int)> fun; 
//
//	fun = [&](int node, int p)->pair<ll,ll>
//		{
//			vector<pair<ll, ll>> nbr_ans; 
//			long long black = 1;
//
//			for (auto& nbr : graph[node])
//			{
//				if (nbr != p)
//				{
//					nbr_ans.push_back(fun(nbr, node));
//					black = (black * nbr_ans.back().white_ans)%MOD;
//				}
//			}
//
//			int k = nbr_ans.size();
//
//
//			if (k == 0) // leaf
//			{
//				return { 1,1 };
//			}
//
//
//			vector<ll> dp(k);
//
//			for (int i = 0; i < k; i++)
//			{
//				dp[i] = 0; 
//				dp[i] += (nbr_ans[i].black_ans * (i > 0 ? dp[i - 1] : 1)) %MOD; 
//				dp[i] = (dp[i] + (nbr_ans[i].white_ans * (i > 0 ? dp[i - 1] : 1)) % MOD)%MOD;
//			}
//
//			return { black, dp[k-1]};
//		};
//	
//
//
//	pair<ll, ll> ans = fun(1, -1); 
//	cout << (ans.first + ans.second) % MOD << endl;
//}
//
//
//
//
