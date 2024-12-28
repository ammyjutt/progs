//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<vector<int>> dp(n, vector<int>(3)); 
//
//		int perf; cin >> perf; // ignore
//
//		dp[0][0] = 1; 
//		dp[0][1] = 0; 
//		dp[0][2] = INT_MIN; 
//
//		auto fun = [](int x, int perf)->int
//			{
//				return x + (perf > x ? 1 : (perf == x ? 0 : -1));
//			};
//
//
//		for (int i = 1; i < n;i++)
//		{
//			int perf; cin >> perf; 
//
//			dp[i][0] = fun(dp[i - 1][0], perf);
//			dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]); 
//			dp[i][2] = max(fun(dp[i - 1][1], perf), fun(dp[i - 1][2], perf));
//		}
//		cout << max(dp[n - 1][1], dp[n - 1][2]) << endl;
//	}
//}
//
//
