//#include <iostream>
//using namespace std;
//#include <vector>
//#include <functional>
//#include <math.h>
//#include <unordered_set>
//
// // TECHNIQUE: BINARY EXPONENTIATION
//// Returns (n^k) % MOD
//long long mod_pow(long long n, long long k, const long long MOD) {
//	long long result = 1;
//	n %= MOD;  // Reduce n first
//
//	while (k > 0) {
//		// If k is odd, multiply result with n
//		if (k & 1) {
//			result = (result * n) % MOD;
//		}
//		// Square n and reduce k by half
//		n = (n * n) % MOD;
//		k >>= 1;
//	}
//	return result;
//}
//
//const int MOD = 1e9 + 7;
//
//
//class DSU {
//	vector<int> parent;
//	vector<int> group_size;
//	int N;
//public:
//	DSU(int n)
//	{
//		N = n;
//		parent = vector<int>(n + 1, -1);
//		group_size = vector<int>(n + 1, 1);
//	}
//	int get_parent(int node)
//	{
//		if (parent[node] == -1)
//		{
//			return node;
//		}
//		return parent[node] = get_parent(parent[node]);
//	}
//	void merge(int u, int v)
//	{
//		if (u <= N and v <= N)
//		{
//			int parent_u = get_parent(u);
//			int parent_v = get_parent(v);
//			if (parent_u != parent_v)
//			{
//				if (group_size[parent_u] >= group_size[parent_v])
//				{
//					group_size[parent_u] += group_size[parent_v];
//					parent[parent_v] = parent_u;
//				}
//				else
//				{
//					group_size[parent_v] += group_size[parent_u];
//					parent[parent_u] = parent_v;
//				}
//			}
//		}
//	}
//	int get_group_size(int node)
//	{
//		return group_size[get_parent(node)];
//	}
//};
//
//
//
//
//
//int main()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//
//	DSU graph(n);
//
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int u; int v; bool type; 
//		cin >> u >> v; 
//		cin >> type;
//
//		if (type == 0)
//		{
//			graph.merge(u, v);
//		}
//		
//	}
//
//	long long all_paths = mod_pow(n, k, MOD);
//	long long paths_without_black = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int component_size = graph.get_group_size(i);
//		paths_without_black = (paths_without_black + mod_pow(component_size, k - 1, MOD))%MOD;
//	}
//
//	cout << (((all_paths - paths_without_black) % MOD) + MOD) % MOD << endl;
//
//}
//
