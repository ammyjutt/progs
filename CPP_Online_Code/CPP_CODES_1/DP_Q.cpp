//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <set>
//#include <climits>
//
//#define hite first
//#define buty second 
//
//#define ll long long
//
// // TLE
//int main()
//{
//	int n; cin >> n; 
//	vector<pair<ll, ll>> v(n); 
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].hite; 
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].buty;
//	}
//
//	set<pair<ll, ll>> st; 
//	
//	ll ans = LLONG_MIN;
//
//	for (int i = 0; i < n; i++)
//	{
//		auto lb = st.lower_bound(v[i]);
//		auto it = st.begin(); 
//		ll orig_buty = v[i].buty;
//		while (it != lb)
//		{
//			v[i].buty = max(v[i].buty, orig_buty + it->second);
//			it = next(it);
//		}		
//		st.insert(v[i]);
//		ans = max(ans, v[i].buty);
//	}
//	cout << ans << endl;
//}
//
//
//
//
