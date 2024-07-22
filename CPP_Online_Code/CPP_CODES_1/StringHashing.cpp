using namespace std;
#include <iostream>
#include <vector>



// This code works fine 



class Hasher {

	const int A = 1e9 + 7;
	const int B = 1e9 + 9;

	
	
	vector<long long> h;
	vector<long long> p;

public:

	Hasher(string& s)
	{

		

		init_h(s);
		init_p(s);
	}

	// h[i] = hash[0:i]
	void init_h(string& s) {
		if (s.length() > 0)
		{
			h = vector<long long>(s.length());
			h[0] = s[0];
			for (int i = 1; i < s.length(); i++) {
				h[i] = ((h[i - 1] * A)%B      + s[i]) % B;
			}

		}
	}

	

	void init_p(string& s) {
		if (s.length() > 0)
		{
			p = vector<long long>(s.length());
			// calculates A^K mod B
			p[0] = 1;
			for (int i = 1; i < s.length(); i++)
			{
				p[i] = (p[i - 1] * A) % B;
			}
		}
	}

	// a and b inclusive
	long long hash_value(int a, int b)
	{
		if (a == 0)
			return h[b];

		long long result = ((h[b] - (h[a - 1] * p[b - a + 1]) % B) + B) % B;
		return result;

	}


};




int main()
{

	string s = "abdulgulgapangamkhan";
	Hasher h(s);
	cout << h.hash_value(19,19) << endl;
	


	string sub = "n";
	Hasher h2(sub);
	cout << h2.hash_value(0,0) << endl;



}


