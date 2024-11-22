//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//
//int main()
//{
//	int n; cin >> n;
//	vector<vector<pair<int, int>>> graph(n+1);
//	int three_degree_vertex_idx = -1;
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int u, v; 
//		cin >> u >> v;
//		graph[u].push_back({ v,i });
//		graph[v].push_back({ u,i });
//		if (graph[u].size() == 3)
//			three_degree_vertex_idx = u;
//		if (graph[v].size() == 3)
//			three_degree_vertex_idx = v;
//	}
//
//	unordered_set<int> special_edges_indices;
//
//	int special_count = 0;
//	int non_special_count = 3;
//
//	if (three_degree_vertex_idx != -1)
//	{
//		special_edges_indices.insert(graph[three_degree_vertex_idx][0].second);
//		special_edges_indices.insert(graph[three_degree_vertex_idx][1].second);
//		special_edges_indices.insert(graph[three_degree_vertex_idx][2].second);
//	}
//	else
//	{
//		non_special_count = 0;
//	}
//	
//
//
//	for (int i = 0; i <= n - 2; i++)
//	{
//		if (special_edges_indices.count(i) == 1) {
//			cout << special_count++ << " ";
//		}
//		else
//		{
//			cout << non_special_count++ << " ";
//		}
//	}
//
//}
//
