//using namespace std; 
//#include <iostream>
//
//
// 
//  // TODO: UNSOLVED
// 
//long long GCD(long long a, long long b)
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
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		long long L, R, G; cin >> L >> R >> G;
//		long long l = L + (G-(L % G))%G;
//
//		if (l > R)
//		{
//			cout << -1 << " " << -1 << endl;
//			continue;
//		}
//
//		long long r = R - (R % G);
//
//		if (G < L)
//		{
//			if (GCD(l, r) != G)
//			{
//				if (l == r)
//				{
//					cout << -1 << " " << -1 << endl;
//
//				}
//				else
//				{
//					r -= G;
//					cout << l << " " << r << endl;
//				}
//			}
//			else
//			{
//				cout << l << " " << r << endl;
//			}
//
//		}
//		else {
//			cout << l << " " << r << endl;
//		}			
//	}
//
//
//}
//
//
