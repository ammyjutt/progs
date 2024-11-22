//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		vector<int> dp_me(n);
//		vector<int> dp_friend(n);
//		cin >> dp_friend[0]; 
//		dp_me[0] = dp_friend[0];
//
//		if (n == 1)
//		{
//			cout << dp_friend[0] << endl;
//			continue;
//		}
//
//		int temp; cin >> temp;
//
//		dp_friend[1] = dp_me[0] + temp;
//		dp_me[1] = dp_friend[0];
//		int prev_temp = temp;
//
//		for (int i = 2; i < n; i++)
//		{
//			int temp; cin >> temp;
//			dp_friend[i] = min(dp_me[i - 1], dp_me[i - 2] + prev_temp) + temp;
//			dp_me[i] = min(dp_friend[i - 1], dp_friend[i - 2]);
//			prev_temp = temp;
//		}
//
//		cout << min(dp_friend[n - 1], dp_me[n - 1]) << endl;
//	}
//}
//
//
//
