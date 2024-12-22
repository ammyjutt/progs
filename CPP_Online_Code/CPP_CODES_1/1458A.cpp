//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//long long GCD(long long a, long long b)
//{
//	if (b == 0)
//		return a;
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
//int main()
//{
//	int n; int m; cin >> n >> m;
//
//	long long first; cin >> first; 
//
//	long long post_gcd = 0;
//	
//	for (int i = 1; i < n; i++)
//	{
//		long long temp; cin >> temp; 
//		if (i == 1)
//		{
//			post_gcd = abs(temp - first);
//		}
//		else
//		{
//			long long diff = abs(temp - first);
//			post_gcd = GCD(post_gcd, diff);
//		}
//	}
//
//
//	for (int i = 0; i < m; i++)
//	{
//		long long temp; 
//		cin >> temp;
//		cout << GCD(temp + first, post_gcd) << " ";
//	}
//	cout << endl;
//}


