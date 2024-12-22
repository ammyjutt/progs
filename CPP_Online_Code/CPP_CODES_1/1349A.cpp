////using namespace std;
////#include <iostream>
////#include <vector>
////#include <cmath>
////#include <unordered_map>
////
////
////#define cur_prime kv.first
////#define cur_count kv.second
//// 
//// //TODO: Couldn't find issue - Unsolved
////
////
////vector<int> primes_till(int n)
////{
////    vector<bool> is_prime(n + 1, true);
////    vector<int> primes;
////
////    for (int i = 2; i <= n; i++)
////    {
////        if (is_prime[i] == true)
////        {
////            primes.push_back(i);
////            long long num = 2*i;
////            while (num <= n)
////            {
////                is_prime[num] = false;
////                num += i;
////            }
////        }
////    }
////    return primes;
////}
////
////
////long long GCD(int a, int b)
////{
////    if (b > a)
////        swap(a, b);
////    while (b)
////    {
////        a %= b;
////        swap(a, b);
////    }
////    return a;
////}
////
////int main()
////{
////    int n; cin >> n; 
////
////
////    if (n == 2)
////    {
////        int first; int second; 
////        cin >> first >> second;
////        cout << (long long) first*second / GCD(first, second) << endl;
////        return 0;
////    }
////
////
////
////    vector<int> primes = primes_till(100000);
////    
////    unordered_map<int, int> minn_first;
////    unordered_map<int, int> minn_second;
////    unordered_map<int, int> prime_occurence;
////    
////
////    for (int i = 0; i < n; i++)
////    {
////        int num; 
////        cin >> num;
////
////        unordered_map<int, int> current_primes_count;
////
////        while (num % 2 == 0)
////        {
////            current_primes_count[2] += 1;
////            num /= 2;
////        }
////
////        for (int f = 3; f * f <= num; f += 2)
////        {
////            while (num % f == 0)
////            {
////                current_primes_count[f] += 1;
////                num /= f;
////            }
////        }
////
////        if (num > 2)
////        {
////            current_primes_count[num] += 1;
////        }
////
////
////        for (auto& kv : current_primes_count)
////        {
////            prime_occurence[cur_prime] += 1;
////
////            if (cur_count <= minn_first[cur_prime] or minn_first[cur_prime] == 0)
////            {
////                minn_second[cur_prime] = minn_first[cur_prime];
////                minn_first[cur_prime] = cur_count;
////            }
////            else if (cur_count <= minn_second[cur_prime] or minn_second[cur_prime] == 0)
////            {
////                minn_second[cur_prime] = cur_count;
////            }            
////        }
////    }
////
////    long long ans = 1; 
////    for (auto& kv : minn_first)
////    {
////        if (prime_occurence[cur_prime] >= n - 1)
////        {
////            int exp = minn_second[cur_prime];
////            ans *= pow(cur_prime, exp);
////        }
////    }
////    cout << ans << endl;
////}
////
////
//
//
//
//
//// Method 1 
//
//using namespace std;
//#include <iostream>
//#include <vector>
//
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
//
//int main()
//{
//	int n; cin >> n; 
//	vector<int> v(n);
//	cin >> v[0];
//
//
//	vector<int> GCD_PRE(n);
//	GCD_PRE[0] = v[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		cin >> v[i];
//		GCD_PRE[i] = GCD(GCD_PRE[i - 1], v[i]);
//	}
//
//
//	vector<int> GCD_POST(n);
//	GCD_POST[n - 1] = v[n - 1];
//
//	for (int i = n - 2; i >= 0; i--)
//	{
//		GCD_POST[i] = GCD(GCD_POST[i + 1], v[i]);
//	}
//
//	long long LCM = -1; 
//
//	for (int i = 0; i < n; i++)
//	{
//		long long CUR_PRE = i > 0 ? GCD_PRE[i - 1] : 0;
//		long long CUR_POST = i < n - 1 ? GCD_POST[i + 1] : 0;
//		long long CUR_GCD = GCD(CUR_PRE, CUR_POST);
//		if (LCM == -1)
//			LCM = CUR_GCD;
//		else
//			LCM = (LCM * CUR_GCD) / GCD(LCM, CUR_GCD);
//	}
//	cout << LCM << endl;
//}
//
//
//
//
//
