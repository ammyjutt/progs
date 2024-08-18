#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;





class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) {
        

        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]].push_back(i);
        }

        stack<int> st;
        st.push(0);
        vector<int> right_greater(n);
        for (int i = 1; i < n; i++)
        {
            while (!st.empty() and nums[i] > nums[st.top()]) {
                right_greater[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty())
        {
            right_greater[st.top()] = n;
            st.pop();
        }



        long long ans = 0;


        for (int i = 0; i < n; i++)
        {
            auto right = lower_bound(mp[nums[i]].begin(), mp[nums[i]].end(), right_greater[i]);
            if (right == mp[nums[i]].begin())
                continue;

            right--;

            auto left = lower_bound(mp[nums[i]].begin(), mp[nums[i]].end(), i);
            
            ans += right - left;

        }







        return ans + n;

    }
};






int main()
{


}

