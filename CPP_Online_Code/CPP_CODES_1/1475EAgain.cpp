//using namespace std;
//#include <iostream>
//#include <climits>
//#include <vector>
//#include <algorithm>
//
//
//#define ll long long
//const int MOD = 1e9 + 7;
//
//
//vector<ll> fact(10000);
//vector<ll> inv_fact(10000);
//
//
//ll mod_exp(ll n,ll p, unsigned ll MOD=ULLONG_MAX) 
//{
//	unsigned ll res = 1; 
//	while (p)
//	{
//		if (p & 1)
//			res = (res * n) % MOD;
//		n = (n * n) % MOD;
//		p >>= 1;
//	}
//	return res;
//}
//
//
//ll mod_inv(ll n, ll MOD)
//{
//	return mod_exp(n, MOD - 2, MOD);
//}
//
//
//ll n_choose_k(ll n, ll k)
//{
//	return (((fact[n] * mod_inv(fact[k], MOD)) % MOD) * mod_inv(fact[n - k], MOD)) % MOD;
//}
//
//
//
//
//
//void pre_process()
//{
//	fact[0] = 1; 
//	for (int i = 1; i <= 1000; i++)
//	{
//		fact[i] = (fact[i - 1] * i)%MOD;
//	}
//
//	for (int i = 999; i >= 1; i--)
//	{
//		inv_fact[i] = (fact[i + 1] * i) % MOD;
//	}
//
//}
//
//
//bool cmp(int& a, int& b)
//{
//	return a > b;
//}
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	pre_process();
//
//
//
//
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		int k; cin >> k; 
//
//
//		
//
//		vector<int> v(n);
//		for (auto& ele : v)
//			cin >> ele;
//
//
//		sort(v.begin(), v.end());
//	
//
//		int lb_ix = lower_bound(v.begin(), v.end(), v[n-k]) - v.begin();
//		int ub_ix = upper_bound(v.begin(), v.end(), v[n-k]) - v.begin();
//
//	
//
//		cout << n_choose_k(ub_ix - lb_ix , ub_ix - (n - k)) << endl;
//
//
//	}
//}
//
//
//
