//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//const int MOD = 1e9 + 7;
//
//int main()
//{
//	string s; cin >> s;
//
//	int current_a_count = 0;
//
//	int n = s.length();
//	vector<int> v;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] == 'b')
//		{
//			if (current_a_count > 0)
//			{
//				v.push_back(current_a_count); 
//				current_a_count = 0;
//			}
//		}
//		else
//		{
//			if (s[i] == 'a')
//			{
//				current_a_count++;
//			}
//		}
//	}
//
//	if (current_a_count > 0)
//		v.push_back(current_a_count);
//
//
//	long long ans = 0;
//	long long mul_so_far = 1;
//
//	int len_v = v.size();
//
//	for (int i = len_v - 1; i >= 0; i--)
//	{
//		ans = (ans + (v[i] * mul_so_far) % MOD) % MOD;
//		mul_so_far = (mul_so_far * (v[i] + 1)) % MOD;
//	}
//
//	cout << ans << endl;
//}
//
