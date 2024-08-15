//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//struct Tree {
//
//	int n;
//	vector<int> T;
//
//
//	
//	
//
//	Tree(vector<int>& nums)
//	{
//		n = nums.size();
//		T.resize(n+1, 0); // 1 based index
//		build_tree(nums);
//	}
//	
//
//	void build_tree(vector<int>& nums) {
//
//		for (int i = 1; i <= n; i++)
//		{
//			T[i] += nums[i-1];
//			int p = i + (i & -i);
//			if(p <= n)
//			{
//				T[p] += T[i];
//			}
//		}
//	}
//
//	void add(int i, int to_add)
//	{
//		i += 1; // map to tree ix
//		while (i <= n)
//		{
//			T[i] += to_add;
//			i += i & -i;
//		}
//	}
//
//
//
//	int getPrefixSum(int i)
//	{
//		int sum = 0;
//		while (i > 0)
//		{
//			sum += T[i];
//			i -= i & -i;
//		}
//		return sum;
//	}
//
//
//	int query(int i, int j)
//	{
//		i += 1;
//		j += 1;
//		int sum_till_j = getPrefixSum(j);
//		if (i == 1)
//			return sum_till_j;
//		return sum_till_j - getPrefixSum(i - 1);
//	}
//
//
//};
//
//
//
//
//int main()
//{
//
//	vector<int> nums = { 5,2,9,-3,5,20,10,-7,2,3,-4,0,-2,15,5 };
//
//	Tree t1 = Tree(nums);
//
//	cout << t1.query(0,6) << endl;
//
//
//
//}
//
//
