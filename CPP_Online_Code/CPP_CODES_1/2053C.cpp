//#include <iostream>
//using namespace std; 
//
//
//#define ll long long
//
//
//pair<ll,ll> fun(ll l, ll r, ll& k)
//{
//	if (l <= r and (r-l+1) >= k)
//	{
//		long long tot = r - l + 1; 
//		long long m = l + int((double)tot / 2 + 0.5) - 1;
//
//
//		if (tot % 2 == 0)
//		{
//			pair<ll, ll> res = fun(l, m, k); 
//			long long right_ans = (res.first) + (m * res.second);
//			pair<ll, ll> temp(res.first + right_ans, res.second * 2);
//			return temp;
//		}
//		else
//		{
//			pair<ll, ll> res = fun(l, m - 1, k); 
//			long long right_ans = (res.first) + (m * res.second);
//			pair<ll, ll> temp(res.first + right_ans + m , res.second * 2 + 1);
//			return temp;
//		}
//
//	}
//	else
//	{
//		return make_pair(0, 0);
//	}
//}
//
//
//
//
//int main()
//{
//	int t;cin >> t; 
//
//	while (t--)
//	{
//		ll n; cin >> n; 
//		ll k; cin >> k;
//
//		cout << fun(1, n, k).first << endl; 
//
//	}
//}
//
//
//


