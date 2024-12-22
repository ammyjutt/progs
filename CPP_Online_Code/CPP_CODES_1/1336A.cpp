//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//
//
//bool cmp(const int& a,const int& b)
//{
//	return a > b;
//}
//
//
//
//
//int main()
//{
//	int n; int k; 
//	cin >> n >> k; 
//
//	vector<vector<int>> graph(n + 1);
//
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int u, v; cin >> u >> v; 
//		graph[u].push_back(v); 
//		graph[v].push_back(u);
//	}
//
//
//
//	vector<int> up(n + 1);
//	vector<int> down(n + 1,0);
//
//
//	
//
//	function<int(int,int)> dfs; 
//
//
//	dfs = [&](int parent, int node)->int {
//
//		for (auto& nbr : graph[node])
//		{
//			if (nbr != parent)
//			{
//				up[nbr] = up[node] + 1;
//				down[node] += dfs(node, nbr);
//			}
//		}
//
//		return 1 + down[node];
//	};
//
//
//	dfs(-1, 1);
//
//	
//	vector<int> vec(n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		vec[i - 1] = down[i]-up[i];
//	}
//
//	sort(vec.begin(), vec.end(), cmp);
//
//	long long ans = 0; 
//
//	for (int i = 0; i < n - k; i++)
//	{
//		ans += vec[i];
//	}
//
//
//	cout << ans << endl;
//}
//
