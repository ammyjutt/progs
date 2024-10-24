//using namespace std;
//#include <iostream>
//#include <vector>
//#include <cassert>
//
//
//// This code works fine 
//
//
//
//class Hasher {
//
//	const int A = 1e9 + 7;
//	const int B = 1e9 + 9;
//
//	
//	
//	vector<long long> h;
//	vector<long long> p;
//
//public:
//
//	Hasher(string& s)
//	{
//		init_h(s);
//		init_p(s);
//	}
//
//	// h[i] = hash[0:i]
//	void init_h(string& s) {
//		cout << "init_h" << endl;
//		if (s.length() > 0)
//		{
//			h = vector<long long>(s.length());
//			h[0] = s[0];
//			for (int i = 1; i < s.length(); i++) {
//				h[i] = ((h[i - 1] * A)%B      + s[i]) % B;
//				cout << h[i] << "|";
//
//			}
//			cout << endl;
//		}
//	}
//
//	
//
//	void init_p(string& s) {
//		if (s.length() > 0)
//		{
//			p = vector<long long>(s.length());
//			// calculates A^K mod B
//			p[0] = 1;
//			for (int i = 1; i < s.length(); i++)
//			{
//				p[i] = (p[i - 1] * A) % B;
//				
//			}
//		}
//	}
//
//	// a and b inclusive
//	long long hash_value(int a, int b)
//	{
//		if (a == 0)
//			return h[b];
//
//		long long result = ((h[b] - (h[a - 1] * p[b - a + 1]) % B) + B) % B;
//		return result;
//
//	}
//
//
//};
//
////
////
////
////class MyHasher {
////public:
////	const int A = 1e9 + 7;
////	const int B = 1e9 + 9;
////	int len_s;
////
////	vector<long long> p;
////	vector<long long> h;
////
////
////	MyHasher(string s)
////	{
////		len_s = s.length();
////		p.resize(len_s);
////		h.resize(len_s);
////
////		init_P();
////		init_H(s);
////	}
////
////
////	void init_P()
////	{
////		p[0] = 1;
////		for (int i = 1; i < len_s; i++)
////		{
////			p[i] = (p[i - 1] * A) % B;
////		}
////	}
////
////	void init_H(string& s)
////	{
////		h[0] = int(s[0]);
////		for (int i = 1; i < len_s; i++)
////		{
////			h[i] = ((h[i - 1] * A) + s[i]) % B;
////		}
////	}
////
////
////	long long operator()(int a, int b)
////	{
////		if (a == 0)
////			return h[b];
////
////		return (h[b] - ((h[a - 1] * p[b - a + 1]) % B) + B) % B;
////	}
////};
////
////
////
////
////
////
////
////
////
////void test_my_hasher_vs_hasher(string& s, int a, int b) {
////	Hasher h1(s);       // Hasher instance
////	MyHasher h2(s);     // MyHasher instance
////
////	// Compare hash_value of Hasher and MyHasher
////	long long hash1 = h1.hash_value(a, b);
////	long long hash2 = h2(a, b);
////
////	cout << "String: " << s << endl;
////	cout << "Hash h1: " << hash1 << endl;
////	cout << "Hash h2: " << hash2 << endl << endl;
////
////	// Assert that both give the same hash
////	assert(hash1 == hash2 && "Hash values don't match!");
////
////	// If this point is reached, the test passed
////	cout << "Test passed for range (" << a << ", " << b << ") on string: " << s << endl;
////}
////
////
////
////int main() {
////	// Test 1: Basic case
////	string s1 = "qlwx";
////	test_my_hasher_vs_hasher(s1, 0, 3); // Entire string
////
////	// Test 2: Substring case
////	test_my_hasher_vs_hasher(s1, 1, 2); // "lw"
////
////	// Test 3: Edge case (single character)
////	test_my_hasher_vs_hasher(s1, 0, 0); // "q"
////
////
////	test_my_hasher_vs_hasher(s1, 3, 3); // "x"
////
////	// Test 4: Edge case (empty string)
////	string s2 = "";
////	test_my_hasher_vs_hasher(s2, 0, 0); // Empty string, should handle gracefully
////
////	// Test 5: Larger string
////	string s3 = "abcdefghijklmnopqrstuvwxyz";
////	test_my_hasher_vs_hasher(s3, 0, 25); // Entire alphabet
////	test_my_hasher_vs_hasher(s3, 5, 15); // "fghijklmno"
////
////	// Test 6: Repeated characters
////	string s4 = "aaaaaaa";
////	test_my_hasher_vs_hasher(s4, 0, 6);  // All 'a's
////
////	// Add more test cases if needed
////	return 0;
////}
////
//
//
//
//int main()
//{
//	string s = "mpe";
//		Hasher h(s);
//		cout << h.hash_value(0, 2) << endl;
//
//
//
//}
