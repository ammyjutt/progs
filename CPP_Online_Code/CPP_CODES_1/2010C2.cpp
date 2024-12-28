//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//#define ll long long 
//
//
//class Hasher {
//public:
//
//	const int A = 1e9 + 7; 
//	const int B = 1e9 + 9; 
//	int N; 
//	vector<ll> h; 
//	vector<ll> p;
//
//	Hasher(string& s)
//	{
//		N = s.length();
//
//		p.resize(N); 
//		h.resize(N);
//
//
//		p[0] = 1; 
//		h[0] = s[0];
//		for (int i = 1; i < N; i++)
//		{
//			p[i] = (p[i - 1] * A) % B; 
//			h[i] = ((h[i - 1] * A) + s[i]) % B;
//		}
//	}
//
//
//	long long get_hash(int a, int b)
//	{
//		if (a == 0)
//			return h[b]; 
//		return ((h[b] + B) - ((h[a - 1] * (p[b - a + 1])) % B)) % B;
//	}
//};
//
//
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(0); 
//	string s; cin >> s; 
//	int len_s = s.length();
//
//	Hasher h(s);
//
//	
//
//	for (int i = len_s-2 ; i>=1; i--)
//	{
//		if (h.get_hash(0, i - 1) == h.get_hash(len_s - i, len_s - 1))
//		{
//			int single_len = (len_s + i) / 2;
//
//			int pt1 = 0; 
//			int pt2 = single_len - i; 
//
//			if (h.get_hash(0, single_len - 1) == h.get_hash(pt2, len_s - 1))
//			{
//				while (pt1 < single_len and s[pt1] == s[pt2])
//				{
//					pt1++; pt2++;
//				}
//
//				if (pt1 == single_len)
//				{
//					cout << "YES" << endl;
//					for (int i = 0; i < single_len; i++)
//						cout << s[i];
//					cout << endl;
//					return 0;
//				}
//			}		
//		}
//	}
//
//	cout << "NO" << endl;
//	return 0;
//}
//
//
//
