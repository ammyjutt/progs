//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//using ll = long long;
//
//
//const ll MOD = 1e9 + 7;
//
//
//
//
//
//int main()
//{
//	int n; cin >> n;
//	int k; cin >> k; 
//
//	vector<int> v(n); 
//	for (auto& i : v)
//		cin >> i;
//
//
//	vector<ll> dp(k + 1, 0); 
//
//	dp[0] = 1;
//
//	for (auto& ai:v)
//	{
//
//		vector<ll> pre(k + 1); 
//		pre[0] = dp[0]; 
//
//		for (int i = 1; i <= k; i++)
//		{
//			pre[i] = (pre[i - 1] + dp[i])%MOD;
//		}
//
//		for (int n = k; n >= 1; n--)
//		{
//			ll lim = min(n, ai); 
//			ll j = n - lim;
//			dp[n] = ((pre[n] - (j >= 1 ? pre[j - 1] : 0))%MOD + MOD) % MOD;
//		}
//
//	}
//	cout << dp[k] << endl;
//}
//
//
//
