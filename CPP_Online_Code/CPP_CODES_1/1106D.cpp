//using namespace std;
//#include <iostream>
//#include <vector>
//#include <queue>
//
//
//
//int main()
//{
//
//	int n; int m; 
//	cin >> n >> m;
//
//	vector< vector<int> > graph(n+1);
//
//	for (int i = 1; i <= m; i++)
//	{
//		int u, v; 
//		cin >> u >> v;
//		if (u != v)
//		{
//			graph[u].push_back(v);
//			graph[v].push_back(u);
//		}
//
//	}
//
//	vector<bool> visited(n + 1, false);
//
//
//	priority_queue<int, vector<int> , greater<int> > pq;
//	pq.push(1);
//	visited[1] = true;
//
//	while (!pq.empty())
//	{
//		int current = pq.top(); pq.pop();
//		cout << current << " ";
//
//		for (auto& nbr : graph[current])
//		{
//			if (!visited[nbr])
//			{
//				pq.push(nbr);
//				visited[nbr] = true;
//			}
//		}
//	}
//}