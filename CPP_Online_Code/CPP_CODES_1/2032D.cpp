//using namespace std; 
//#include <iostream>
//#include <queue>
//
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	while(t--)
//	{
//		int n; cin >> n;
//		queue<int> q;
//		int child = 2;
//		vector<int> parent(n);
//		parent[1] = 0;
//		while (true)
//		{
//			cout << "? " << 1 << " " << child << endl; cout.flush();
//			int r; cin >> r;
//			if (r == 0)
//			{
//				parent[child] = 0;
//				q.push(child);
//				child++;
//			}
//			else
//			{
//				parent[child] = 1;
//				break;
//			}
//		}
//
//		q.push(child);
//		child++;
//
//
//		while (child != n)
//		{
//			int p = q.front(); q.pop();
//			cout << "? " << p << " " << child << endl; cout.flush();
//			int r; cin >> r;
//			if (r == 1)
//			{
//				parent[child] = p;
//				q.push(child); child++;
//			}
//		}
//
//		cout.flush();
//		cout << "!";
//		for (int i = 1; i <= n - 1; i++)
//		{
//			cout << " " << parent[i];
//		}
//		cout << endl; cout.flush();
//
//	}
//	
//}
//
//
