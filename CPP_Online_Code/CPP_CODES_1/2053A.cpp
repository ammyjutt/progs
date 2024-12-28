//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<long long> v(n+1); 
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> v[i];
//		}
//
//
//
//		auto is_valid = [&](int l, int r)->bool
//			{
//				long long minn = INT_MAX;
//				long long maxx = INT_MIN; 
//
//				for (int i = l; i <= r; i++)
//				{
//					maxx = max(maxx, v[i]); 
//					minn = min(minn, v[i]);
//				}
//				return (long long)minn + minn > maxx;
//			};
//
//
//		vector<long long> dp(n + 1);
//
//		dp[0] = dp[1] = 1;
//
//		for (int i = 2; i <= n; i++)
//		{
//			dp[i] = dp[i - 1]; 
//			for (int j = i - 1; j >= 1; j--)
//			{
//				if (is_valid(j, i))
//				{
//					dp[i] += dp[j - 1];
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//
//		cout << (dp[n] >= 2 ? "YES" : "NO") << endl;
//	}
//
//
//}
//
