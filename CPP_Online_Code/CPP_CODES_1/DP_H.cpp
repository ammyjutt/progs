//using namespace std; 
//#include <iostream>
//#include <vector>
//
//#define ll long long 
//const int MOD = 1e9 + 7;
//
//int main()
//{
//	int h, w;cin >> h >> w; 
//
//	vector<vector<char>> grid(h, vector<char>(w));
//
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			cin >> grid[i][j];
//		}
//	}
//
//	vector<vector<ll>> dp(h, vector<ll>(w));
//	dp[h - 1][w - 1] = (grid[h-1][w-1] == '#' ? 0:1);
//
//
//	for (int i = h - 1; i >= 0; i--)
//	{
//		for (int j = w - 1; j >= 0; j--)
//		{
//			if (grid[i][j] == '#')
//			{
//				dp[i][j] = 0;
//			}
//			else
//			{
//				if (i + 1 < h)
//				{
//					dp[i][j] = (dp[i][j] + dp[i + 1][j]) % MOD;
//
//				}
//				if (j + 1 < w)
//				{
//					dp[i][j] = (dp[i][j] + dp[i][j + 1]) % MOD;
//				}
//			}
//		}
//	}
//	cout << dp[0][0] << endl;
//}
//
//
//
