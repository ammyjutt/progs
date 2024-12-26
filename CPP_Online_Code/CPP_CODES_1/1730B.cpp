//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//
//int main()
//{
//
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		vector<int> X(n + 1); 
//
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> X[i];
//		}
//
//		long long minn = LONG_MAX; 
//		long long maxx = LONG_MIN; 
//
//		for (int i = 1; i <= n; i++)
//		{
//			long long time; cin >> time; 
//			long long left = X[i] - time;
//			long long right = X[i] + time;
//			minn = min(minn, left);
//			maxx = max(maxx, right);
//		}
//
//		cout << double(minn) + ((maxx - minn) / double(2)) << endl;
//	}
//}
//
