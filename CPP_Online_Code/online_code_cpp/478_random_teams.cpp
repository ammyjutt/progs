#include <iostream>
using namespace std;



int get_pairs(int n)
{
		return n * (n - 1) / 2;
}


int main()
{
	long long n, m;
	cin >> n >> m;
	long long max = get_pairs(n - m + 1);
	long long min = get_pairs(n / m) * (m - n % m) + get_pairs(n / m + 1) * (n % m);
	cout << min << " " << max << endl;
	
	return 0;
}






