#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <random>
#include <ctime>

const int A = 1e9 + 7;
const int B = 1e9 + 9;


class Hasher {
	vector<long long> h;
	vector<long long> p;
public:
	Hasher(string s)
	{
		int len_s = s.length();
		h.resize(len_s);
		p.resize(len_s);
		h[0] = s[0];
		p[0] = 1;
		for (int i = 1; i < len_s; i++)
		{
			p[i] = (p[i - 1] * A) % B;
			h[i] = (h[i - 1] * A + s[i]) % B;
		}
	}

	long long get_hash_value(int a, int b) {
		// a and b inclusive 
		if (a == 0)
			return h[b];

		long long result = ((h[b] - (h[a - 1] * p[b - a + 1])%B) + B) % B;
		return result;
	}
};


std::vector<long long> powers;


















int main()
{

	//string s = "abdulgulgapangamkhan";
	//Hasher h(s);
	//cout << h.get_hash_value(13, 18) << endl;


	//string sub = "gamkha";
	//Hasher h2(sub);
	//cout << h2.get_hash_value(0,5) << endl;


	vector<string> v = generateRandomStrings(100, 40);








}








