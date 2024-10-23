//using namespace std;
//#include <iostream>
//#include <vector>
//#include <math.h>
//#include <unordered_set>
//
//
//
//class MyHasher {
//public:
//    const int A = 1e9 + 7;
//    const int B = 1e9 + 9;
//    int len_s;
//
//    vector<long long> p;
//    vector<long long> h;
//
//
//    MyHasher(string& s)
//    {
//        len_s = s.length();
//        p.resize(len_s);
//        h.resize(len_s);
//
//        init_P();
//        init_H(s);
//    }
//
//
//    void init_P()
//    {
//        p[0] = 1;
//        for (int i = 1; i < len_s; i++)
//        {
//            p[i] = (p[i - 1] * A) % B;
//        }
//    }
//
//    void init_H(string& s)
//    {
//        h[0] = s[0];
//        for (int i = 1; i < len_s; i++)
//        {
//            h[i] = ((h[i - 1] * A) + s[i])%B;          
//        }
//    }
//
//
//    long long operator()(int a, int b)
//    {
//        if (a == 0)
//            return h[b];
//
//        return (h[b] - ((h[a - 1] * p[b - a + 1]) % B) + B) % B;
//    }
//};
//
//
//
//class Solution {
//public:
//    int distinctEchoSubstrings(string text) {
//        
//        MyHasher text_hasher(text);
//        int ans = 0;
//        unordered_set<string> set;
//
//        for (int i = 0; i < text.length() - 2; i++)
//        {
//            for (int substring_size = 1; substring_size <= (text.length() - i) / 2; substring_size++)
//            {
//                
//                if (text_hasher(i, i + substring_size - 1) == text_hasher(i + substring_size, i + substring_size * 2 - 1))
//                {
//                    string subb = text.substr(i, substring_size);
//                    if (( subb == text.substr(i + substring_size, substring_size)) and (set.find(subb) == set.end()))
//                    {
//                        set.insert(subb);
//                        ans += 1;
//                    }
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//
//
//
//int main()
//{
//
//    string s = "abcabcabc";
//    Solution sol;
//
//    cout << sol.distinctEchoSubstrings(s);
//
//}
//
//
