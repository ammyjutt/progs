//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
//
//const int A = 1e9 + 7;
//const int B = 1e9 + 9;
//
//
//class Hasher {
//	vector<long long> h;
//	vector<long long> p;
//public:
//	Hasher(string s)
//	{
//		h = get_h(s);
//		p = get_p(s);
//	}
//
//
//	vector<long long> get_p(string s)
//	{
//		// calculates (A^k) mod B
//		vector<long long> p(s.length());
//		p[0] = 1;
//
//		for (int i = 1; i < s.length(); i++)
//		{
//			p[i] = (p[i - 1] * A) % B;
//		}
//		return p;
//	}
//
//	vector<long long> get_h(string s)
//	{
//
//		int len_s = s.length();
//		vector<long long> h(len_s);
//		h[0] = s[0];
//
//		for (int i = 1; i < len_s; i++)
//		{
//			h[i] = (h[i - 1] * A + s[i]) % B;
//		}
//		return h;
//	}
//
//
//	int get_hash_value(int a, int b) {
//		if (a == 0)
//			return h[b];
//
//		int result = (h[b] - h[a - 1] * p[b - a + 1]+B) % B;
//		return result;
//	}
//
//	
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//
//	string s = "abdulgulgapangamkhan";
//	Hasher h(s);
//	cout << h.get_hash_value(16,18 ) << endl;
//	cout << s[16] << endl;
//
//
//	string sub = "kha";
//	Hasher h2(sub);
//	cout << h2.get_hash_value(0,2) << endl;
//}
//
//
//
//
//
//
//
