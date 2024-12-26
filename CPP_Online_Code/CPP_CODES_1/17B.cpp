//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//
//
//
//int main()
//{
//	int n; cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp; 
//	}
//
//	vector<int> cost(n + 1, INT_MAX);
//	int m; cin >> m; 
//	int count = 0;
//
//	while (m--)
//	{
//		int u, v, c; cin >> u >> v >> c;
//		if (cost[v] == INT_MAX)
//			count++;
//		cost[v] = min(cost[v], c);
//	}
//
//	if (count != n - 1)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		long long summ = 0; 
//		for (auto& c : cost)
//		{
//			summ += (c == INT_MAX ? 0 : c);
//		}
//		cout << summ << endl;
//	}
//}
//
//
