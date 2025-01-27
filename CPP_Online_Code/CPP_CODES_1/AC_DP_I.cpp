//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//#define ll long long
//
//
//int  main()
//{
//	int n; cin >> n; 
//	vector<ll> v(n); 
//	ll summ = 0;
//	for (auto& i : v)
//	{
//		cin >> i;
//		summ += i;
//	}
//
//	vector<vector<long long>> dp(n, vector<long long>(n)); 
//
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][i] = v[i];
//	}
//
//	vector<vector<char>> p(n, vector<char>(n));
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int j = i + 1;
//		if (v[i] > v[j])
//		{
//			dp[i][j] = v[i];
//			p[i][j] = 'L';
//		}
//		else
//		{
//			dp[i][j] = v[j];
//			p[i][j] = 'R';
//		}
//		
//	}
//
//	
//
//
//	for (int s = 3; s <= n; s++)
//	{
//		int j = s - 1;
//		for (int i = 0; i <= (n-s); i++)
//		{
//			// pick ith
//			ll op1 = v[i] + (p[i+1][j] == 'L' ? dp[i+2][j] : dp[i+1][j-1]);
//			// pick jth
//			ll op2 = v[j] + (p[i][j - 1] == 'L' ? dp[i + 1][j - 1] : dp[i][j - 2]);
//			
//			if (op1 > op2)
//			{
//				dp[i][j] = op1; 
//				p[i][j] = 'L';
//			}
//			else
//			{
//				dp[i][j] = op2;
//				p[i][j] = 'R';
//			}
//			j++;
//		}
//	}
//
//	cout << dp[0][n - 1] - (summ - dp[0][n - 1]) << endl;
//}
//
//
//
//
