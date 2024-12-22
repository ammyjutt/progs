//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//
//// TODO: Learn Modular Exponentiation
//
//
//const int MOD = 1000000007;
//
//long long mod_inv(long long a, long long mod) {
//    long long result = 1;
//    long long power = mod - 2;  // Fermat's Little Theorem
//    while (power > 0) {
//        if (power % 2 == 1) {
//            result = (result * a) % mod;
//        }
//        a = (a * a) % mod;
//        power /= 2;
//    }
//    return result;
//}
//
//vector<long long> fact(1001);
//vector<long long> inv_fact(1001);
//
//void preprocess()
//{
//    fact[0] = inv_fact[0] = 1;
//
//    for (long long i = 1; i <= 1000; i++) {
//        fact[i] = fact[i - 1] * i % MOD;
//    }
//
//    inv_fact[1000] = mod_inv(fact[1000], MOD);
//    for (long long i = 999 ; i >= 0; i--) {
//        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
//    }
//}
//
//
//
//long long n_choose_k(long long n, long long k) {
//    if (k > n) return 0;  
//    if (k == 0 || k == n) return 1;  
//
//    return (fact[n] * inv_fact[k] % MOD) * inv_fact[n - k] % MOD;
//}
//
//
//
//bool cmp(int& a, int& b)
//{
//    return a > b;
//}
//
//
//int main()
//{
//    preprocess();
//    int t; cin >> t; 
//    while (t--)
//    {
//        int n; cin >> n;
//        int k; cin >> k;
//
//        vector<int> v(n);
//        for (auto& i : v) cin >> i;
//        sort(v.begin(), v.end(), cmp);
//
//        int left = k - 1;
//
//        while (left > 0 and v[left - 1] == v[left])
//            left--;
//
//        int right = k - 1;
//        while (right + 1 != n and v[right + 1] == v[right])
//            right++;
//
//        int to_select = k - 1 - (left - 1);
//        int set_size = right - left + 1;
//
//
//        cout << n_choose_k(set_size,to_select) << endl;
//    }
//
//}
//
