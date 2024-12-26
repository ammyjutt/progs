//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
// // TODO: Couldn't Solve
//
//
//
//bool three_ok(long long n, long long d)
//{
//	if (n == 2)
//	{
//		return (2 * d) % 3 == 0;
//	}
//
//	long long mod_res = n % 3;
//	for (int i = n-1; i >= 2; i--)
//	{
//		mod_res = (mod_res * (i % 3)) % 3;
//	}
//	return mod_res == 0;
//}
//
//
//
//
//
//
//bool nine_ok(long long n, long long d)
//{
//	if (n == 2)
//	{
//		return (2 * d) % 9 == 0;
//	}
//
//	if (n == 3)
//	{
//		return (n * (n - 1) * d) % 9 == 0;
//	}
//
//	long long mod_res = n % 9;
//	for (int i = n - 1; i >= 2; i--)
//	{
//		mod_res = (mod_res * (i % 9)) % 9;
//	}
//	return mod_res == 0;
//}
//
//
//
//
//
//bool seven_ok(long long n, long long d)
//{
//	if (n <= 3)
//	{	
//
//		int fact_n = 1;
//
//		for (int i = 1; i <= n; i++)
//		{
//			fact_n *= i;
//		}
//
//		long long num = d; 
//		for (int i = 2; i <= fact_n; i++)
//		{
//			num *= 10;
//			num += d;
//		}
//		return num % 7 == 0;
//	}
//
//
//
//
//
//
//
//
//
//
//
//}
//
//
//
//
//
//
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		long long n, d; 
//		cin >> n >> d; 
//
//		cout << 1 << " ";
//
//		if (d == 3 || three_ok(n,d))
//			cout << 3 << " ";
//
//		if (d == 5)
//			cout << 5 << " ";
//
//
//
//		if (d == 7 || seven_ok(n,d))
//			cout << 7 << " ";
//
//		if (d == 9 || nine_ok(n,d))
//			cout << 9 << " ";
//
//		cout << endl;
//	}
//}
//
//
//
//
//
//
//
