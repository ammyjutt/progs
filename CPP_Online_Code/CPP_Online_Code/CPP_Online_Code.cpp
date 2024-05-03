
#include <unordered_map>
#include <queue>
#include <iostream>


#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {

        vector<int> delay_ended_today(delay + 1, 0);
        vector<int> forgot_today(forget + 1, 0);

        long long cs = 0;
        long long ans = 1;

        int delay_ix = 0;
        int forget_ix = 0;

        int len_delay = delay + 1;
        int len_forget = forget + 1;


        delay_ended_today[delay] = 1;
        forgot_today[forget] = 1;



        for (int i = 1; i <= n; i++)
        {

            cs += delay_ended_today[delay_ix];
            cs -= forgot_today[forget_ix];


            if (i != 1)
            {
                delay_ended_today[(delay_ix + delay) % len_delay] = cs;
                forgot_today[(forget_ix + forget) % len_forget] = cs;
            }


            long long to_add = cs - forgot_today[forget_ix];

            ans = (ans + to_add) % int(1e9 + 7);
            

            


            delay_ix = (delay_ix + 1) % len_delay;
            forget_ix = (forget_ix + 1) % len_forget;


        }

        return ans;


    }
};






int main() {
    
    Solution s;

    

    cout << s.peopleAwareOfSecret(684,18,496);





    return 0;
}

