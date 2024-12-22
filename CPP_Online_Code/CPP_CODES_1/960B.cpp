//using namespace std;
//#include <iostream>
//#include <queue>
//#include <math.h>
//
//int main()
//{
//	int n, k1, k2; 
//	cin >> n >> k1 >> k2;
//	int k = k1 + k2;
//
//	vector<int> v1(n);
//	priority_queue<long long> pq;
//
//	for (int i = 0; i < n; i++) cin >> v1[i];
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp;
//		pq.push(abs(v1[i]-temp));
//	}
//
//	while (k)
//	{
//		long long top = pq.top(); pq.pop();
//		if (top == 0)
//			break;
//		pq.push(top - 1);
//		k--;
//	}
//
//	if (k == 0)
//	{
//		long long ans = 0;
//		while (!pq.empty())
//		{
//			ans += (pq.top() * pq.top());
//			pq.pop();
//		}
//		cout << ans << endl;
//	}
//	else
//	{
//		if (k & 1)
//			cout << 1 << endl;
//		else
//			cout << 0 << endl;
//	}
//}
//
//
