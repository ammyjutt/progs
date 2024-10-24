//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
// // GOT TLE :)
//
//
//
//class SpecialHasher {
//
//public:
//    const int A = 1e9 + 7;
//    const int B = 1e9 + 9;
//    int len_s = 0;
//
//
//    vector<long long> h;
//    vector<long long> p;
//
//    vector<long long> h_reverse;
//
//
//    SpecialHasher(string& s)
//    {
//        len_s = s.length();
//
//        h.resize(len_s);
//        p.resize(len_s);
//        h_reverse.resize(len_s);
//
//
//        h[0] = s[0];
//        p[0] = 1;
//
//
//
//        for (int i = 1; i < len_s; i++)
//        {
//            p[i] = (p[i - 1] * A) % B;
//            h[i] = ((h[i - 1] * A) + s[i]) % B;
//        }
//
//        reverse(s.begin(), s.end());
//        h_reverse[0] = s[0];
//
//        for (int i = 1; i < len_s; i++)
//        {
//            h_reverse[i] = ((h_reverse[i - 1] * A) + s[i]) % B;
//        }
//    }
//
//
//    long long operator()(int a, int b, bool reverse = false)
//    {
//        if (reverse)
//        {            
//            int end = len_s - 1 - a;
//            int start = len_s - 1 - b;
//
//            a = start;
//            b = end;
//
//            if (a == 0)
//                return h_reverse[b];
//            return (h_reverse[b] - ((h_reverse[a - 1] * p[b - a + 1]) % B) + B) % B;
//        }
//
//        if (a == 0)
//            return h[b];
//        return (h[b] - ((h[a - 1] * p[b - a + 1]) % B) + B) % B;     
//    }
//
//};
//
//
//bool fun(string& s, int i, int k)
//{
//    for (int count = 1; count <= k; count++)
//    {
//        if (s[i - k + count] != s[i - k - count])
//            return false;
//    }
//
//    return true;
//}
//
//
//
//bool fun_rev(string& s, int i, int k)
//{
//    for (int count = 0; count < k; count++)
//    {
//        if (s[i + count] != s[i+k+k - count])
//            return false;
//    }
//    return true;
//}
//
//
//
//
//class Solution {
//public:
//    long long maxProduct(string s) {
//
//        int len_s = s.length();
//
//        // cases
//
//        vector<int> left(len_s);
//        vector<int> right(len_s);
//        string original(s);
//        SpecialHasher hasher(s);
//       
//
//        left[0] = left[1] = 1;
//        int next_wing_size = 1;
//
//        for (int i = 2; i < len_s; i++)
//        {
//
//            int wing_size = next_wing_size;
//
//            while (wing_size * 2 + 1 <= i + 1)
//            {
//                int start = i - wing_size + 1;
//                int end = i;
//                if (hasher(start , end) == hasher(i - wing_size * 2, i - wing_size - 1, true)
//                    and (fun(original, i,wing_size))
//                    )
//                {
//                    next_wing_size = wing_size + 1;
//                }
//                wing_size += 1;
//            }
//
//            left[i] = (next_wing_size - 1) * 2 + 1;
//        }
//
//                                                                    // evedh   kbdhntnhdbkhdeve
//
//
//        right[len_s - 1] = right[len_s - 2] = 1;
//        next_wing_size = 1;
//
//        for (int i = len_s - 3; i >= 0; i--)
//        {
//            int wing_size = next_wing_size;
//
//            while (wing_size * 2 + 1 <= (len_s - i))
//            {
//                int start = i;
//                int end = i + wing_size - 1;
//                if (hasher(i, i+wing_size-1) == hasher(i + wing_size + 1, i + wing_size * 2, true)
//                    and fun_rev(original , i,wing_size)
//                    )
//                {
//                    next_wing_size = wing_size + 1;
//                }
//                wing_size += 1;
//            }
//
//            right[i] = (next_wing_size - 1) * 2 + 1;
//        }
//
//
//        long long ans = 0;
//        int mexx_ix = 0;
//
//        for (int i = 0; i < len_s - 1; i++)
//        {
//            if (left[i] * right[i + 1] > ans)
//            {
//                ans = left[i] * right[i + 1];
//                mexx_ix = i;
//
//            }
//        }
//
//        return ans;
//
//    }
//};
//
//
//
//int main()
//{
//    Solution s;
//
//    cout << s.maxProduct("epmxqygtpncdtrcqghurhexfxehruhgqcrtdcnptgyqxmpebwb");
//    //cout << s.maxProduct("evedh");
//}



