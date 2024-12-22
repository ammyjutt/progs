//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	
//		int n; cin >> n;
//
//		vector<int> perm(n + 1, -1);
//
//		int discovered = 0;
//
//		int x = 1; 
//		int y = 2; 
//		long long summ = 0;
//
//		while (discovered != n-1)
//		{
//			while (perm[x] != -1 or x == y)
//				x++;
//			while (perm[y] != -1 or x == y)
//				y++;
//			if (x > n or y > n)
//				break;
//
//			cout << "? " << x << " " << y << endl;
//			cout.flush();
//			int x_mod_y;
//			cin >> x_mod_y;
//
//			cout << "? " << y << " " << x << endl;
//			cout.flush();
//			int y_mod_x; 
//			cin >> y_mod_x;
//
//			if (x_mod_y > y_mod_x)
//			{
//				perm[x] = x_mod_y; 
//				discovered++;
//				summ += perm[x];
//			}
//			else
//			{
//				perm[y] = y_mod_x;
//				discovered++;
//				summ += perm[y];
//			}
//		}
//
//		cout << "! ";
//		int remaining_num = (1LL * n * (n + 1)) / 2 - summ;
//		for (int i = 1; i <= n; i++)
//		{
//			if (perm[i] == -1)
//				cout << remaining_num << " ";
//			else
//				cout << perm[i] << " ";
//		}
//		cout.flush();
//}