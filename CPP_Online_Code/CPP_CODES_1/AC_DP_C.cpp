//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	int n; cin >> n;
//	long long dp_a = 0, dp_b=0, dp_c=0;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		long long n_dp_a = max(b + dp_b, c + dp_c); 
//		long long n_dp_b = max(a + dp_a, c + dp_c);
//		long long n_dp_c = max(a + dp_a, b + dp_b); 
//
//		dp_a = n_dp_a; 
//		dp_b = n_dp_b; 
//		dp_c = n_dp_c;
//	}
//
//	cout << max(dp_a, max(dp_b, dp_c)) << endl;
//
//}
//

