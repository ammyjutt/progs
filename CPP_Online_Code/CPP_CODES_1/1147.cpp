//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//
//class Hasher {
//public:
//    const int A = 1e9 + 7;
//    const int B = 1e9 + 9;
//
//    vector<long long> h;
//    vector<long long> p;
//
//    Hasher(string& s)
//    {
//        init_h(s);
//        init_p(s);
//    }
//
//    void init_h(string& s)
//    {
//        if (s.length() > 0)
//        {
//            h = vector<long long>(s.length());
//            h[0] = s[0];
//            for (int i = 1; i < s.length(); i++)
//            {
//                h[i] = ((h[i - 1] * A) % B + s[i]) % B;
//            }
//        }
//    }
//
//
//    void init_p(string& s)
//    {
//        if (s.length() > 0)
//        {
//            p = vector<long long>(s.length());
//            p[0] = 1;
//            for (int i = 1; i < s.length(); i++)
//            {
//                p[i] = (p[i - 1] * A) % B;
//            }
//        }
//    }
//
//
//    long long get_hash(int a, int b)
//    {
//        if (a == 0)
//            return h[b];
//
//        return ((h[b] - (h[a-1]*p[b-a+1])%B)+B)%B;
//    }
//
//
//};
//
//
//
//
//
//class Solution {
//public:
//    int longestDecomposition(string text) {
//        Hasher h(text);
//        int ans = 0;
//
//
//        int len_text = text.size();
//        int left = 0;
//        int right = len_text-1;
//
//        int left_ext = left;
//        int right_ext = right;
//
//        while (left < right)
//        {
//
//            if (h.get_hash(left, left_ext) == h.get_hash(right_ext, right) and (text.substr(left, left_ext - left + 1) == text.substr(right_ext, right - right_ext + 1)))
//            {
//   
//                    ans += 2;
//                    left = left_ext + 1;
//                    right = right_ext - 1;
//                    left_ext = left;
//                    right_ext = right;
//                
//            }
//            else
//            {
//                left_ext++;
//                right_ext--;
//                if (left_ext >= right_ext)
//                {
//                    ans += 1;
//                    return ans;
//                }
//            }
//        }
//        if (left == right)
//            return ans + 1;
//        
//        return ans;
//
//    }
//};
//
//
//int main()
//{
//
//    Solution s; 
//    cout << s.longestDecomposition("qlwxqlwx") << endl;
//
//}
//
//
//
//
//
//
