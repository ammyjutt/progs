//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//
//
//template <class T>
//struct segTree
//{
//    int n;
//    vector<T> t;
//    segTree(vector<T> v)
//    {
//        n = v.size();
//        t.resize(2 * n);
//        for (int i = 0; i < n; i++)
//        {
//            t[i + n] = v[i];
//        }
//
//        // build upwards
//        for (int i = n - 1; i >= 1; i--)
//        {
//            t[i] = merge(t[i * 2], t[i * 2 + 1]);
//        }
//    }
//
//    
//
//    void update(int i, T k)
//    {
//        i += n;
//        t[i] = k; 
//        while (i > 1) // 1 is root
//        {
//            i /= 2;
//            t[i] = merge(t[i * 2], t[(i * 2) + 1]);
//        }
//    }
//
//    T query(int l, int r)
//    {
//        l += n;
//        r += n;
//        T res; // TODO: Init here
//        while (l < r)
//        {
//            if (l %2 == 1) // is right child
//            {
//                res = merge(res, t[l]);
//                l++;
//            }
//            if (r%2 == 0)
//            {
//                res = merge(res, t[r]);
//                r--;
//            }
//            l >>= 1;
//            r >>= 1;
//        }
//        if (l == r)
//            res = merge(res, t[l]);
//        return res;
//    }
//
//    T merge(T a, T b)
//    {
//		// TODO: 
//        T res;
//        res = max(a, b);
//        return res;
//    }
//};
//
//
//
//
//
//
//int main()
//{
//
//    vector<int> v = { 1,2,3,4,5,6,2,8,10,11,12,13,14 };
//
//    segTree<int> tr(v);
//
//    cout << tr.query(0,12) << endl;
//
//}
//
//
//
//
//
//
