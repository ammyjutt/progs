//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <functional>
//
//int get_op_type(pair<bool, bool>& op)
//{
//	if (op.first && op.second)
//		return 1; 
//	if (op.first && !op.second)
//		return 2;
//	if (!op.first && op.second)
//		return 3;
//	return 4;
//}
//
//int main()
//{
//	int n; cin >> n; 
//	vector<vector<int>> all_nodes(5);
//	vector<short int> node_type(n + 1);
//
//	for (int i = 1; i <= n; i++)
//	{
//		string t; cin >> t; 
//		string r; cin >> r; 
//		pair<bool, bool> temp({ t == "set", r == "true" });
//		short int op_type = get_op_type(temp); 
//		node_type[i] = op_type;
//		all_nodes[op_type].push_back(i);
//	}
//
//	int m; cin >> m;
//	vector<int> inc(n + 1, 0);
//
//	vector<vector<int>> sub_graph(n + 1);
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b; cin >> a >> b;
//		inc[b] += 1;
//		sub_graph[a].push_back(b);
//	}
//
//	vector<vector<int>> nbrs(6);
//	nbrs[0] = { 4,1 };
//	nbrs[1] = { 2,3 }; 
//	nbrs[2] = { 2,3 }; 
//	nbrs[3] = { 4 }; 
//	nbrs[4] = { 4,1 };
//
//
//	vector<bool> vis(n + 1, false);
//	bool ans_found = false;
//
//	vector<int> ans;
//
//
//	 function <void(int)> fun = [&](int node)->void
//		{
//			for (auto& nbr : sub_graph[node])
//			{
//				inc[nbr] -= 1;
//			}
//			ans.push_back(node);
//			vis[node] = true;
//
//			for (auto& nbr_head : nbrs[node_type[node]])
//			{
//				for (auto& nbr : all_nodes[nbr_head])
//				{
//					if (inc[nbr] == 0 and vis[nbr] == false)
//					{
//						fun(nbr);
//					}
//				}
//			}
//		};
//
//	fun(0);
//
//	if (ans.size() == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//			cout << ans[i] << " ";
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//}
//
