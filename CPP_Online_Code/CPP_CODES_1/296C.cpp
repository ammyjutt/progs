//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//int main()
//{
//	int n,m, k; cin >> n >> m >> k;
//
//	vector<int> v(n + 1);
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i];
//	}
//
//	vector<vector<int>> operations(m+1, vector<int>(3));
//	vector<int> operations_freq(m+1, 0);
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> operations[i][0] >> operations[i][1] >> operations[i][2];
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		int x, y; cin >> x >> y;
//		operations_freq[x] += 1;
//		if (y + 1 <= m)
//			operations_freq[y + 1] -= 1;
//	}
//
//
//	vector<long long> to_add(n + 1, 0);
//
//	for (int i = 1; i <= m; i++)
//	{
//		operations_freq[i] += operations_freq[i - 1];
//		int l = operations[i][0]; 
//		int r = operations[i][1];
//		long long d = operations[i][2];
//
//		to_add[l] += (operations_freq[i] * d);
//		if (r + 1 <= n)
//			to_add[r + 1] -= (operations_freq[i] * d);
//	}
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		to_add[i] += to_add[i - 1];
//		cout << (v[i] + to_add[i]) << " ";
//	}
//	cout << endl;
//}
//
