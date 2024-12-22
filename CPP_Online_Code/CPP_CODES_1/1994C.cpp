//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//
//
//int main()
//{
//
//
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n;
//		long long x; cin >> x;
//
//		vector<long long> v(n+1);
//		v[0] = 0;
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> v[i];
//			v[i] += v[i - 1];
//		}
//
//
//		vector<long long> dp(n+1, 0);
//		long long ans = 0; 
//
//		for (int i = n; i>0; i--)
//		{
//			int j = upper_bound(v.begin() + i-1, v.end(), v[i-1] + x) - v.begin();
//			
//			if (j <= n)
//			{
//				dp[i] = 1; 
//				if (j+1 <= n)
//				{
//					dp[i] += dp[j + 1];
//				}
//			}
//			ans += dp[i];
//		}
//
//		cout << ((long long) n * (n + 1)) / 2 - ans << endl;
//	}
//}
//
//
//
