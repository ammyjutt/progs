using namespace std;
#include <iostream>
#include <vector>






int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return std::abs(a); // Return absolute value of GCD
}



int main()
{
	short int t;
	cin >> t;


	while (t--)
	{
		int m, n, k;
		cin >> m >> n >> k;

		vector<vector<int>> heights(m, vector<int>(n));

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int temp; cin >> temp;
				heights[i][j] = temp;
			}
		}

		vector< vector<bool>> type(m, vector<bool>(n));

		long long D = 0;


		for (int i = 0; i < m; i++)
		{
			string s; cin >> s;
			for (int j = 0; j < n; j++)
			{
				type[i][j] = s[j] == '1';
				D += (s[j] == '1') ? heights[i][j] : -heights[i][j];
			}
		}

		D = (D < 0) ? -D:D;

		if (D == 0)
		{
			cout << "YES" << endl;
			continue;
		}

		vector<int> differences;

		

		for (int i = 0; i < (m-k+1); i++)
		{
			int current_submatrix_sum = 0;

			for (int j = 0; j < n; j++)
			{
				// compute column sum 
				int col_j_sum = 0;
				for (int w = i; w < i + k; w++)
				{
					col_j_sum += int(type[w][j]);
				}

				if (j >= k)
				{
					// subtract 
					for (int w = i; w < i + k; w++)
					{
						col_j_sum -= int(type[w][j - k]);
					}
				}

				current_submatrix_sum += col_j_sum;

				if(j >= k-1)
				{
					int current_difference = abs(current_submatrix_sum - ((k * k) - current_submatrix_sum));
					if(current_difference != 0)
						differences.push_back(current_difference);
				}
			}
		}

		if (differences.size() == 0)
		{
			cout << "NO" << endl;
			continue;
		}

		int GCD = differences[0];

		for (int i = 1; i < differences.size(); i++)
		{
			GCD = gcd(GCD, differences[i]);
		}

		if (D % GCD == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

}


