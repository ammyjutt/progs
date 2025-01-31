//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//
//
//// TECHNIQUE: HASHER , GCD, FRACTION CLASS
// // TODO:
//
//
//
//long long find_gcd(long long a, long long b)
//{
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//
//
//class Fraction
//{
//public:
//	long long num;
//	long long den;
//
//	Fraction(long long num, long long den)
//	{
//		if (den < 0)
//		{
//			num = -num;
//			den = -den;
//		}
//
//		long long gcd = find_gcd(num, den);
//		this->num = num / gcd;
//		this->den = den / gcd;
//	}
//
//	bool operator <(const Fraction& other) const 
//	{
//		return this->num * other.den < this->den * other.num;
//	}
//
//	bool operator == (const Fraction& other) const
//	{
//		return this->num == other.num and this->den == other.den;
//	}
//};
//
//struct FractionHasher {
//	size_t operator()(const Fraction& f) const {
//		// More sophisticated hash combine
//		size_t seed = 0;
//		seed ^= hash<long long>{}(f.num) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//		seed ^= hash<long long>{}(f.den) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//		return seed;
//	}
//};
//
//
//int main()
//{
//	int n; cin >> n;
//
//	vector<int> a(n);
//	vector<int> b(n);
//
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++) cin >> b[i];
//
//	unordered_map<Fraction, int, FractionHasher> mp;
//	int zeros = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 0)
//		{
//			if (b[i] == 0)
//				zeros++;
//		}
//		else
//		{
//			int num = -1 * b[i];
//			int den = a[i];
//			Fraction temp(num, den);
//			mp[temp]++;
//		}
//	}
//
//	int mexx = zeros;
//	for (auto& kv : mp)
//	{
//		mexx = max(mexx, kv.second + zeros);
//	}
//	cout << mexx << endl;
//}
//
//
using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//
//
//// TECHNIQUE: HASHER , GCD, FRACTION CLASS
// // TODO:
//
//
//
//long long find_gcd(long long a, long long b)
//{
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//
//
//class Fraction
//{
//public:
//	long long num;
//	long long den;
//
//	Fraction(long long num, long long den)
//	{
//		if (den < 0)
//		{
//			num = -num;
//			den = -den;
//		}
//
//		long long gcd = find_gcd(num, den);
//		this->num = num / gcd;
//		this->den = den / gcd;
//	}
//
//	bool operator <(const Fraction& other) const 
//	{
//		return this->num * other.den < this->den * other.num;
//	}
//
//	bool operator == (const Fraction& other) const
//	{
//		return this->num == other.num and this->den == other.den;
//	}
//};
//
//struct FractionHasher {
//	size_t operator()(const Fraction& f) const {
//		// More sophisticated hash combine
//		size_t seed = 0;
//		seed ^= hash<long long>{}(f.num) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//		seed ^= hash<long long>{}(f.den) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//		return seed;
//	}
//};
//
//
//int main()
//{
//	int n; cin >> n;
//
//	vector<int> a(n);
//	vector<int> b(n);
//
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++) cin >> b[i];
//
//	unordered_map<Fraction, int, FractionHasher> mp;
//	int zeros = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 0)
//		{
//			if (b[i] == 0)
//				zeros++;
//		}
//		else
//		{
//			int num = -1 * b[i];
//			int den = a[i];
//			Fraction temp(num, den);
//			mp[temp]++;
//		}
//	}
//
//	int mexx = zeros;
//	for (auto& kv : mp)
//	{
//		mexx = max(mexx, kv.second + zeros);
//	}
//	cout << mexx << endl;
//}
//
//
