//#include <vector>
//#include <string>
//using namespace std;
//#include <iostream>
//
//
//
//// Z Algorithm
//
//
//void z_algo(string s)
//{
//	int len_s = s.length();
//
//	vector<int> z(len_s);
//
//	z[0] = 0;
//
//	int y = 1;
//	int x = 1;
//
//	while (true)
//	{
//		if (x == y)
//		{
//			if (y == len_s)
//				break;
//
//			// create range
//			while (y < len_s and s[y] == s[y - x])
//				y++;
//			z[x] = y - x;
//			if (y == x)
//			{
//				y++; x++;
//			}
//		}
//		else
//		{
//			int k = x + 1;
//			while (k < y) {
//				if ((k + z[k - x]) < y) 
//				{
//					z[k] = z[k - x];
//					k++;
//				}
//				else
//				{
//					z[k] = y-k;
//					x = k;
//					if (y == len_s)
//						break;
//					// create range
//					while (y < len_s and s[y] == s[y - x])
//						y++;
//					z[k] = y - x;
//					k++;
//				}
//			}
//			x = y;			
//		}
//
//	}
//
//	for (auto& ele : z)
//	{
//		cout << ele << " ";
//	}
//}
//
//
//
//int main()
//{
//
//	string s = "ACBACDACBACBACDA";
//	//string s = "AAA";
//
//	z_algo(s);
//
//
//
//}
//
//
//
//
//
