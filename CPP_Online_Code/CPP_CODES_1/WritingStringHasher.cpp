//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//#define ll long long
//
//
//
//class Hasher {
//public:
//
//	const int C = 1e9 + 7; 
//	const int M = 1e9 + 9; 
//	int N; 
//	vector<ll> h; 
//	vector<ll> p;
//
//	Hasher(string& s)
//	{
//		N = s.length();
//
//		p.resize(N);  // p^C mod M
//		h.resize(N); // hash[0:i]
//
//
//		p[0] = 1; 
//		h[0] = s[0];
//		for (int i = 1; i < N; i++)
//		{
//			p[i] = (p[i - 1] * C) % M; 
//			h[i] = ((h[i - 1] * C) + s[i]) % M;
//		}
//	}
//
//
//	long long get_hash(int a, int b)
//	{
//		if (a == 0)
//			return h[b]; 
//		return ((h[b] - ((h[a - 1] * (p[b - a + 1])) % M)) % M + M) % M;
//	}
//};