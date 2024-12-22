//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//
//// TODO: DO THIS WITH SEGMENT TREE
//// TECHNIQUE
//
//
//int gcd(int a, int b)
//{
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//// idea is that if we have '1' in array , we can propogate it to left/right. every step forward/backward 
//// will cost us 1 operation and 1 will be placed on a non-one element
//
//
//int main()
//{
//	int n; cin >> n;
//	vector<int> v(n);
//	
//	int ones_count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//		if (v[i] == 1)
//		{
//			ones_count++;
//		}
//	}
//
//
//	if (ones_count > 0)
//	{
//		cout << n - ones_count << endl;
//	}
//	else // we don't have any '1' in array
//	{    // let's make '1's
//		 // find smalles subarray , whose cumulative GCD is 1
//		 // we will use that smallest array to make 1 and then propagate this 1
//
//		int smallest_subarray_size = n+1;
//		for (int i = 0; i < n-1; i++)
//		{
//			int gcd_of_subarray = v[i];
//			
//			for (int j = i+1; j < n; j++)
//			{
//				gcd_of_subarray = gcd(gcd_of_subarray, v[j]);
//				if (gcd_of_subarray == 1)
//				{
//					smallest_subarray_size = min(smallest_subarray_size, j - i + 1);
//					break;
//				}
//			}
//			
//		}
//
//		if (smallest_subarray_size == n + 1)
//			cout << -1 << endl;
//		else
//			cout << (n - 1) + (smallest_subarray_size-1) << endl;
//	}
//}