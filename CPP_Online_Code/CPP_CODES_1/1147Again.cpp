//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//#define ll long long
//



//class Hasher {
//public:
//
//    const int C = 1e9 + 7;
//    const int M = 1e9 + 9;
//    int N;
//    vector<ll> h;
//    vector<ll> p;
//
//    Hasher(string& s)
//    {
//        N = s.length();
//
//        p.resize(N);  
//        h.resize(N); 
//        p[0] = 1;
//        h[0] = s[0];
//        for (int i = 1; i < N; i++)
//        {
//            p[i] = (p[i - 1] * C) % M;
//            h[i] = ((h[i - 1] * C) + s[i]) % M;
//        }
//    }
//
//    ll get_hash(int a, int b)
//    {
//        if (a == 0)
//            return h[b];
//        return ((h[b] - (h[a - 1] * p[b - a + 1]) % M) + M) % M;
//    }
//};


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

//int main()
//{
//
//    Solution s; 
//    cout << s.longestDecomposition("qlwxqlwx") << endl;
//
//}






