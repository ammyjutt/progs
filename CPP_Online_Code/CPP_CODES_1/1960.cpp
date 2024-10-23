using namespace std;
#include <iostream>
#include <vector>








class Hasher {

public:
    const int A = 1e9 + 7;
    const int B = 1e9 + 9;


    vector<long long> h;
    vector<long long> p;
    Hasher(string& s)
    {
        int len_s = s.length();

        h.resize(len_s);
        p.resize(len_s);


        h[0] = s[0];
        p[0] = 1;



        for (int i = 1; i < len_s; i++)
        {
            p[i] = (p[i - 1] * A) % B;
            h[i] = ((h[i - 1] * A) + s[i]) % B;
        }
    }


    long long operator()(int a, int b)
    {
        if (a == 0)
            return h[b];
        return (h[b] - ((h[a - 1] * p[b - a + 1]) % B) + B) % B;
    }

};





class Solution {
public:
    long long maxProduct(string s) {

        int len_s = s.length();

        // cases

        vector<int> left(len_s);
        vector<int> right(len_s);
        Hasher s_hash(s);

        left[0] = left[1] = 1;
        int next_wing_size = 1;

        for (int i = 2; i < len_s; i++)
        {

            int wing_size = next_wing_size;

            while (wing_size * 2 + 1 <= i + 1)
            {
                if (s_hash(i - wing_size + 1, i) == s_hash(i - wing_size * 2, i - wing_size - 1))
                {
                    next_wing_size = wing_size + 1;
                }
                wing_size += 1;
            }

            left[i] = (next_wing_size - 1) * 2 + 1;
        }


        right[len_s - 1] = right[len_s - 2] = 1;
        next_wing_size = 1;

        for (int i = len_s - 3; i >= 0; i--)
        {
            int wing_size = next_wing_size;

            while (wing_size * 2 + 1 <= (len_s - i))
            {
                if (s_hash(i, i + wing_size - 1) == s_hash(i + wing_size + 1, i + wing_size * 2))
                {
                    next_wing_size = wing_size + 1;
                }
                wing_size += 1;
            }

            right[i] = (next_wing_size - 1) * 2 + 1;
        }


        long long ans = 0;


        for (int i = 0; i < len_s - 1; i++)
        {
            if (left[i] * right[i + 1] > ans)
                ans = left[i] * right[i + 1];
        }
        return ans;

    }
};



int main()
{


    Solution s;

    cout << s.maxProduct("evedhkbdhntnhdbkhdeve");


}







