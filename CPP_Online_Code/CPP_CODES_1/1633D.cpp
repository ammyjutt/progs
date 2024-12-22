//using namespace std;
//#include <iostream>
//#include <vector>
//#include <climits>
//
//
//
//
//
//int main()
//{
//	int t; cin >> t; 
//
//
//
//	vector<int> dp(1001, INT_MAX); 
//
//
//	dp[1] = 0; 
//
//	for (int i = 1; i <= 1000; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if ((i + (i / j) <= 1000))
//			{
//				dp[i + (i / j)] = min(dp[i + (i / j)], dp[i] + 1);
//			}
//		}
//	}
//
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		int max_k; cin >> max_k;
//
//		max_k = min(max_k, 12 * n);
//
//		vector<int> cost(n+1);
//		
//		for (int i = 1; i <= n;i++)
//		{
//			int temp; cin >> temp; 
//			cost[i] = dp[temp];
//		}
//
//		vector<int> coins(n+1);
//		for (int i = 1; i <= n;i++)
//		{
//			cin >> coins[i];
//		}
//		vector<long long> prev(max_k+1, 0);
//		vector<long long> cur(max_k+1 , 0);
//
//
//		for (int i = 1; i <= n;i++)
//		{
//			for (int k = 0; k <= max_k; k++)
//			{
//				cur[k] = prev[k];
//				if (cost[i] <= k)
//					cur[k] = max(cur[k], prev[k - cost[i]] + coins[i]);
//			}
//			swap(prev, cur);
//		}
//		cout << prev[max_k] << endl;
//	}
//}
//
//
//
//
