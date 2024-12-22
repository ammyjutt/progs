//using namespace std;
//#include <iostream>;
//#include <vector>
//
//vector<long long> fact(12);
//
//void pre()
//{
//	fact[0] = 1;
//	for (int i = 1; i <= 11; i++)
//	{
//		fact[i] = i*fact[i - 1];
//	}
//}
//
//long long n_choose_k(int n, int k)
//{
//	return fact[n] / (fact[n - k] * fact[k]);
//	
//}
//
//long long fun(int num)
//{
//	return n_choose_k(num + 2, 2);
//}
//
//
//int main()
//{
//	int t; cin >> t;
//	pre();
//
//	while (t--)
//	{
//		long long n; cin >> n;
//		long long ans = 1; 
//		while (n)
//		{
//			int cur_dig = n % 10;
//			ans *= (fun(cur_dig));
//			n /= 10;
//		}
//		cout << ans << endl;
//	}
//}
//
//
