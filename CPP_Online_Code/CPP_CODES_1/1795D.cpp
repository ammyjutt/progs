//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//
//// TODO: LEARN BINARY EXP
//// TODO: LEARN INV MOD 
//
//
//const int MOD = 998244353;
//vector<long long> fact(150001);
//
//long long mod_exp(long long a, long long b, long long mod) {
//	long long result = 1;
//	while (b > 0) {
//		if (b % 2 == 1)
//			result = (result * a) % mod;
//		a = (a * a) % mod;
//		b /= 2;
//	}
//	return result;
//}
//
//void preprocess() {
//	fact[0] = 1;
//	for (int i = 1; i <= 150000; i++) {
//		fact[i] = (i * fact[i - 1]) % MOD;
//	}
//}
//
//long long n_c_k(long long n, long long k) {
//	if (k > n) return 0; // nCk is 0 if k > n
//	long long numerator = fact[n];
//	long long denominator = (fact[k] * fact[n - k]) % MOD;
//	long long denominator_inv = mod_exp(denominator, MOD - 2, MOD); // Modular inverse of denominator
//	return (numerator * denominator_inv) % MOD;
//}
//
//
//
//int main()
//{
//	int n; cin >> n; 
//	preprocess();
//
//	long long ans = 1; 
//
//	for (int i = 0; i < n; i+=3)
//	{
//		vector<int> v(3);
//		cin >> v[0] >> v[1] >> v[2];
//		sort(v.begin(), v.end()); 
//		if (v[0] == v[1] and v[1] == v[2])
//			ans = (ans * 3) % MOD;
//		else if (v[0] == v[1])
//			ans = (ans * 2) % MOD;
//	}
//
//	n /= 3; 
//
//	ans = (ans * n_c_k(n, n / 2))%MOD;
//	cout << ans << endl;
//
//}