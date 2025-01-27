//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <climits>
//
//
//using ll = long long;
//
//
//int main()
//{
//	int n; cin >> n; 
//	vector<long long> v(n); 
//
//	for (auto& i : v)
//		cin >> i;
//
//	vector<vector<long long>> dp(n, vector<long long>(n,INT_MAX)); 
//	vector<long long> pre(n);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][i] = 0;
//		pre[i] = v[i];
//		if (i > 0)
//			pre[i] += pre[i - 1];
//	}
//
//
//	for (int size = 2; size <= n; size++)
//	{
//		for (int i = 0; i <= n - size; i++)
//		{
//			int ix = -1;
//			ll minn = LLONG_MAX;
//			for (int j = i; j <= (i + size - 2); j++)
//			{
//				long long cur = dp[i][j]+ dp[j + 1][i + size - 1];
//				if (cur < minn)
//				{
//					minn = cur;
//					ix = j;
//				}			
//			}
//			minn = 0;
//			// two substeps cost
//			if (i != ix)
//			{
//				minn += dp[i][ix];
//			}
//
//			if (ix + 1 != i + size - 1)
//			{
//				minn += dp[ix + 1][i + size - 1];
//			}
//
//			// this step cost
//			minn += pre[i + size - 1] - (i > 0 ? pre[i - 1] : 0); 
//
//			dp[i][i + size - 1] = minn;
//					
//		}
//	}
//
//	cout << dp[0][n-1] << endl;
//}
//
//
