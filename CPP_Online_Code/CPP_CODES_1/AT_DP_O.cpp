//using namespace std;
//#include <iostream>
//#include <vector>
//#include <bitset>
//using ll = long long;
//
//const int MOD = 1e9 + 7;
////// TODO: NEXT Combination
// //// TOFIX: 
//
//int main()
//{
//	int n; cin >> n;
//	vector<int> man(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int num = 0;
//		for (int i = n-1; i >= 0; i--)
//		{
//			bool bit; cin >> bit; 
//			num |= (bit == 1 ? 1 << i : 0);
//		}
//		man[i] = num;
//	}
//
//	vector<ll> dp_prev(1 << n);
//	vector<ll> dp_next(1 << n);
//
//	dp_prev[0] = 0; 
//	dp_next[0] = 0; 
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int mask = 1; mask <= ((1 << n) - 1); mask++)
//		{
//			int common = mask & man[i];
//
//			dp_next[mask] = 0; 
//			
//			for (int pos = 0; pos < 20; pos++)
//			{
//				if ((1 << pos) & common)
//				{
//					dp_next[mask] = ((i == 0 ? 1 : dp_prev[mask & ~(1 << pos)]) % MOD + dp_next[mask]) % MOD;
//				}
//			}
//		}
//		swap(dp_next,dp_prev);
//	}
//
//	cout << dp_next[(1 << n) - 1] << endl;
//}