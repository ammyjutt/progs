//using namespace std;
//#include <iostream>
//#include <vector>
//#include<algorithm>
//
//#define ll long long
//
//long long give_ans(ll n,ll a)
//{
//	vector<int> mods; 
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int temp; cin >> temp;
//		mods.push_back(temp % a);
//	}
//	sort(mods.begin(), mods.end());
//
//	long long ans = mods.back() - mods[0];
//	for (int i = 1; i < n;i++)
//	{
//		long long cur_ans = (mods[i - 1] + a) - mods[i];
//		ans = min(ans, cur_ans);
//	}
//	return ans;
//}
//
//
//long long GCD(long long a, long long b)
//{
//	if (b > a)
//		swap(a, b);
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		long long n, a, b; cin >> n >> a >> b;
//		cout << give_ans(n,GCD(a,b)) << endl;		
//	}
//}
//
//
