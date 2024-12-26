//using namespace std; 
//#include <iostream>
//
//
//bool get_bit(long long num, int pos)
//{
//	return (num >> (pos - 1)) & 1; 
//}
//
//void set_bit(long long& num, int pos)
//{
//	num |= (1LL << (pos - 1));
//}
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		long long b, c, d; cin >> b >> c >> d; 
//
//		long long ans = 0;
//
//		int i;
//		for (i = 1; i <= 61; i++)
//		{
//			if (get_bit(d, i) == 1)
//			{
//				if (get_bit(b, i) == 0)
//				{
//					if (get_bit(c, i) == 1)
//						break;
//					else
//						set_bit(ans, i);
//				}
//			}
//			else
//			{
//				if (get_bit(b, i))
//				{
//					if (get_bit(c, i) == 0)
//					{
//						break;
//					}
//					else
//					{
//						set_bit(ans, i);
//					}
//				}
//			}
//		}
//
//		if (i <= 61)
//			cout << -1 << endl;
//		else
//			cout << ans << endl;
//
//	}
//
//}
//
//
