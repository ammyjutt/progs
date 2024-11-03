//using namespace std;
//#include <iostream>
//#include <vector>
//#include <cassert>
//
//
//// This code works fine - was tested last time
//
//
//class Hasher {
//
//	const int A = 1e9 + 7;
//	const int B = 1e9 + 9;
//	vector<long long> h;
//	vector<long long> p;
//	int n;
//public:
//
//	Hasher(string& s)
//	{
//		n = s.length();
//		h.resize(n);
//		p.resize(n);
//		if (n == 0)
//			return;
//		h[0] = s[0];
//		p[0] = 1;
//		for (int i = 1; i < n; i++)
//		{
//			p[i] = (p[i - 1] * A) % B;
//			h[i] = (((h[i - 1] * A) % B) + s[i]) % B;
//		}
//	}
//	long long get_hash(int a, int b)
//	{
//		if (a == 0)
//			return h[b];
//
//		return (h[b] - ((h[a - 1] * p[b - a + 1]) % B) + B) % B;
//	}
//};
//
//
//
//int main()
//{
//	string s = "mpe";
//		Hasher h(s);
//		cout << h.get_hash(0, 2) << endl;
//
//
//
//}
