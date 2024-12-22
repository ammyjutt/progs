//using namespace std;
//#include <iostream>
//
//
//int main()
//{
//	int n; int k; 
//	cin >> n >> k;
//	string s; cin >> s; 
//	n = s.length();
//
//	if (s.length() == 1)
//	{
//		while (k--)
//		{
//			cout << s[0];
//		}
//		cout << endl;
//		return 0;
//	}
//
//	int i = 0; int j = 1;
//
//	while (j < n)
//	{
//		if (s[0] < s[j])
//			break;
//		else if (s[i] == s[j])
//		{
//			int start = j;
//			while (j < n and s[i] == s[j])
//			{
//				i++; j++; 
//			}
//			if (j == n)
//			{
//				j = start; break;
//			}
//			
//				//vvhvxk
//			else if (s[i] < s[j])
//			{
//				j = start; break;
//			}
//			else if (s[j] < s[i])
//			{
//				i = 0; j++;
//			}
//		}
//		else {
//			j++;
//		}
//	}
//
//
//	for (int ix = 0; k--; ix = (ix + 1) % j)
//	{
//		cout << s[ix];
//	}
//
//	cout << endl;
//}
//
//
