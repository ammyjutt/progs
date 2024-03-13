#include <vector>
#include <string>
using namespace std;



// Z Algorithm


vector<int> z_algo(string s)
{
	int len_s = s.length();

	vector<int> z(len_s);

	z[0] = 0;

	int y = 1;
	int x = 1;

	while (true)
	{
		if (x == y)
		{
			// create range
			while (y < len_s and s[y] == s[y - x])
				y++;
			s[x] = y - (x - 1);
		}
		else
		{
			int k = x + 1;
			while (k < y) {
				if (k + (z[k - x] - 1) < y) 
				{
					z[k] = z[k - x];
					k++;
				}
				else
				{
					z[k] = z[k - x];
					x = k;
					// create range
					while (y < len_s and s[y] == s[y - x])
						y++;
					s[k] = y - (x - 1);
					k++;
				}
			}

		}

	}






}




