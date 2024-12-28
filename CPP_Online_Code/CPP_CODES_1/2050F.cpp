//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <cmath>
//
//#define ll long long
//
//
//ll GCD(ll a, ll b)
//{
//	if (b > a)
//		swap(a, b); 
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//// TODO: Sparse 
//
//class Table {
//
//	vector<vector<ll>> dp; 
//public: 
//
//	Table(vector<ll>& v)
//	{
//		int N = v.size(); 
//
//		dp.resize(N); 
//
//
//		for (int i = 0; i < N; i++)
//		{
//			dp[i].resize(N);
//			dp[i][0] = v[i];
//		}
//
//		for (int j = 1; (1LL << j) <= N; j++)
//		{
//			for (int i = 0; (i+ (1LL << j)-1) < N; i++)
//			{
//				dp[i][j] = GCD(dp[i][j - 1], dp[i + (1LL << j - 1) - 1][j-1]);
//			}
//		}
//	}
//
//	ll query(ll L, ll R)
//	{
//		int p = log2(R - L + 1); 
//		return GCD(dp[L][p], dp[R - (1LL << p) + 1][p]);
//	}
//
//
//
//};
//
//
//
//
//int main()
//{
//
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n;
//		int q; cin >> q; 
//
//		vector<ll> diff(n - 1); 
//
//		int prev; cin >> prev; 
//
//		for (int i = 1; i < n;i++)
//		{
//			int cur; cin >> cur; 
//			diff[i-1] = abs(cur - prev); 
//			prev = cur;
//		}
//
//		Table t(diff);
//
//
//		while (q--)
//		{
//			int l, r; cin >> l >> r; 
//
//			l -= 1;
//			r -= 1;
//
//			cout << t.query(l, r - 1) << " ";
//		}
//		cout << endl;
//	}
//
//
//}
//
//
//
