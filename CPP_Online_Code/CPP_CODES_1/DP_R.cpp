//using namespace std; 
//#include <iostream>
//#include <vector>
//
//using ll = long long; 
//const int MOD = 1e9 + 7;
//
//
//vector<vector<ll>> mul(vector<vector<ll>> m1, vector<vector<ll>> m2)
//{
//
//	int m = m1.size(); 
//	int n = m2[0].size();
//	int middle = m1[0].size();
//
//
//	vector<vector<ll>> res(m, vector<ll>(n));
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			long long res_ij = 0; 
//			for (int k = 0; k < middle; k++)
//			{
//				res_ij = (res_ij + (m1[i][k] * m2[k][j]) % MOD) % MOD;
//			}
//			res[i][j] = res_ij;
//		}
//	}
//
//	return res;
//}
//
//
//
//
//
//
//int main()
//{
//	int n; ll k; cin >> n >> k;
//	vector<vector<ll>> matrix(n, vector<ll>(n));
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	vector<vector<ll>> res(n, vector<ll>(n));
//
//	for (int i = 0; i < n; i++)
//	{
//		res[i][i] = 1;
//	}
//
//
//	while (k)
//	{
//		if (k & 1)
//		{
//			res = mul(matrix, res);
//		}
//		matrix = mul(matrix, matrix);
//		k >>= 1;
//	}
//
//
//	long long summ = 0; 
//
//	for (auto& row : res)
//	{
//		for (auto& ele : row)
//		{
//			summ = (summ + ele) % MOD;
//		}
//	}
//	cout << summ << endl;
//}
//
//
//
//
