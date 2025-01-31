//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//#include <iomanip>
//
//
//int main()
//{
//	std::cout << std::setprecision(20);  // Set precision for all floating-point output
//
//	int n; cin >> n; 
//	
//	vector<vector<long double>> dp(n+1, vector<long double>(n+1,0));
//	dp[0][0] = 1;
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		long double p; cin >> p;
//		// if tails
//
//		for (int j = 0; j <= i - 1; j++)
//		{
//			dp[i][j] = dp[i - 1][j] * (1-p);
//		}
//
//		// heads 
//		for (int j = 1; j <= i;j++)
//		{
//			dp[i][j] += (dp[i - 1][j - 1] * p);
//		}
//	}
//
//	long double ans = 0; 
//
//	for (int j = n / 2 + 1; j<= n; j++)
//	{
//		ans += dp[n][j];
//	}
//	cout << ans << endl;
//}
//
//
