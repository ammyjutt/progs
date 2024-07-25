using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {


    int fun(string& s, string& t)
    {

        int s_left = 0;
        int last_matched_ix = -1;
        int i;

        for (i = 0; i < t.length(); i++) {

            while (s_left < s.length() and s[s_left] != t[i]) {
                s_left++;
            }
            if (s_left == s.length()) {
                break;
            }

            last_matched_ix = s_left;
            s_left++;
        }



        if (i == t.length())
            return 0;

        int j;
        int s_right_ix = s.length() - 1;

        for (j = t.length() - 1; j >= i; j--)
        {
            while (s_right_ix > last_matched_ix and s[s_right_ix] != t[j]) {
                s_right_ix--;
            }

            if (s_right_ix == last_matched_ix)
                break;
            s_right_ix--;
        }

        return max(0, j - i + 1);

    }



public:
    int minimumScore(string s, string t) {

        
        // move left 

        int ans = fun(s, t);
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        ans = min(fun(s,t),ans);
        


    }
};



int main()
{
	Solution s;

}


