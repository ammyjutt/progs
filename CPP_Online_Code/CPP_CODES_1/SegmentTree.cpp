//#include <iostream>
//#include <vector>
//#include <vector>
//
//using namespace std;
//
//
//void build(int idx, int left, int right, vector<int>& arr, vector<int>& treeArr)
//{
//	if (left == right) // single element 
//	{
//		treeArr[idx] = arr[left];
//	}
//	else
//	{
//		int mid = left + (right - left) / 2;
//		build(idx * 2, left, mid, arr, treeArr);
//		build(idx * 2 + 1, mid + 1, right, arr, treeArr);
//		treeArr[idx] = treeArr[idx * 2] + treeArr[idx * 2 + 1];
//	}
//}
//
//
//int query(vector<int>& T,int idx, int tl, int tr, int ql, int qr)
//{
//	if (ql > qr)
//	{
//		return 0;
//	}
//	if (ql == tl and qr == tr)
//	{
//		return T[idx];
//	}
//	int mid = tl + (tr - tl) / 2;
//
//	return query(T, idx * 2, tl, mid, ql, min(mid, qr))
//		+ query(T, idx * 2 + 1, mid + 1, tr, max(ql, mid+1), qr);
//}
//
//
//void update(int pos, int val, vector<int>& T, int idx, int tl, int tr)
//{
//	if (tl == tr)
//	{
//		T[idx] = val;
//		return;
//	}
//
//	int mid = tl + (tr - tl) / 2;
//	if (pos <= mid)
//	{
//		update(pos, val, T, idx * 2, tl, mid);
//	}
//	else
//	{
//		update(pos, val, T, idx * 2 + 1, mid + 1, tr);
//	}
//	T[idx] = T[idx * 2] + T[idx * 2 + 1];
//}
//
//
//int main()
//{
//	vector<int> arr = { 1,2,3,4,5 };
//
//	int n = arr.size();
//
//	vector<int> T(2*n);
//
//	build(1, 0, n - 1, arr, T);
//
//	
//	update(1, 12, T, 1, 0, n - 1);
//
//
//	cout << query(T, 1, 0, n - 1, 1, 3);
//
//
//}
//
//
//
//
