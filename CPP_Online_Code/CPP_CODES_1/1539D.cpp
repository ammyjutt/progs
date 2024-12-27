//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
//#define q first
//#define d second
//#define ll long long
//
//bool cmp(pair<ll,ll>& first, pair<ll,ll>& second)
//{
//	return first.d > second.d;
//}
//
//
//int main()
//{
//	int n; cin >> n;
//
//	vector<pair<ll,ll>> v(n);
//
//
//	ll to_buy = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].q >> v[i].d;
//		to_buy += v[i].q;
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	ll bought = 0; 
//	int l = 0;
//	int r = n - 1;
//	long long ans = 0;
//
//	while (bought < to_buy)
//	{
//		if (bought >= v[r].d)
//		{
//			bought += v[r].q; 
//			ans += v[r].q;
//			r--;
//		}
//		else
//		{
//			ll cur_buy = min(v[l].q, v[r].d - bought);
//			bought += cur_buy;
//			v[l].q -= cur_buy;
//			ans += (cur_buy * 2);
//			if (v[l].q == 0)
//				l++;
//		}
//	}
//
//	cout << ans << endl;
//
//}
//
