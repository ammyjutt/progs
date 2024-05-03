
#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {

        vector<int> delay_ended_today(delay + 1, 0);
        vector<int> forgot_today(forget + 1, 0);

        int cs = 0;
        int ans = 0;

        int delay_ix = 0;
        int forget_ix = 0;

        int len_delay = delay + 1;
        int len_forget = forget + 1;

        for (int i = 1; i <= n; i++)
        {

            if (i == delay+1)
            {
                delay_ended_today[delay_ix] = 1;              
            }
            

            cs += delay_ended_today[delay_ix];
            cs -= forgot_today[forget_ix];           

            
            delay_ended_today[(delay_ix + delay) % len_delay] = cs;
            forgot_today[(forget_ix + forget) % len_forget] = cs;


            ans += cs;
            ans -= forgot_today[forget_ix];

            if(i > delay)
                delay_ix = (delay_ix + 1) % len_delay;
            if (i > forget)
                forget_ix = (forget_ix + 1) % len_forget;
            
        }

        return ans;


    }
};
