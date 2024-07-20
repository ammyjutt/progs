//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//bool cmp_upper(int value, int current)
//{
//	// Q: is value smaller than current ? Ans: Yes -> Go to left
//	// at the end of the day return it+1
//	// true means pick left portion
//	return value < current;
//}
//
//bool cmp_lower(int value, int current)
//{
//	// Q: is value smaller than current ? Ans: Yes -> Go to left
//	// at the end of the day return it
//	return value < current ;
//}
//
//
//
//int main()
//{
//	//vector<int> v = { 10,20,30,40,50 };
//	vector<int> v = { 1,2,3,4,5 };
//
//
//	auto it = upper_bound(v.begin(), v.end(), 2 , cmp_upper);
//	cout << *it << endl;
//
//
//
//	it = lower_bound(v.begin(), v.end(), 5, cmp_lower);
//	cout << *(it-1) << endl;
//
//
//}
//
//
