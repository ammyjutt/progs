//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main()
//{
//	int n; cin >> n;
//	int q; cin >> q;
//
//	vector<int> v(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//	}
//
//	sort(v.begin(), v.end(), greater<int>());
//	vector<int> prod(n, 0);
//
//	while (q--)
//	{
//		int l; int r; 
//		cin >> l >> r;
//		l -= 1;
//		r -= 1;
//
//		prod[l]++;
//		if(r+1 < n)
//			prod[r + 1]--;
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		prod[i] += prod[i - 1];
//	}
//
//	long long ans = 0;
//	sort(prod.begin(), prod.end(), greater<int>());
//
//	for (int i = 0; i < n; i++)
//	{
//		ans += ((long long)v[i] * prod[i]);
//	}
//	cout << ans << endl;
//}
//
