using namespace std;
#include <iostream>
#include <vector>


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int len_nums = nums.size();

        vector<int> prev(len_nums);
        vector<int> cur(len_nums);
        vector<int> prefix_sum(len_nums);

        prefix_sum[0] = nums[0];
        prev[0] = nums[0];
        for (int i = 1; i < len_nums; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
            prev[i] = prefix_sum[i];
        }

        if (k == 1)
            return prefix_sum[len_nums-1];


        int max_k = k;

        for (k = 2; k <= max_k; k++)
        {
            int not_allowed = k - 1;
            // iterate over cur
            for (int i = k - 1; i < len_nums; i++)
            {
                cur[i] = max(nums[i], prev[i - 1]);

                for (int j = i - 1; j >= k-1; j--)
                {
                    int subarray = prefix_sum[i] - prefix_sum[j - 1];
                    int this_one = max(subarray, prev[j - 1]);
                    cur[i] = min(cur[i], this_one );
                }
            }


            vector<int>& temp = prev;
            prev = cur;
            cur = temp;
        }


        return prev[len_nums - 1];
    }
};


int main()
{

    vector<int> v = { 2,3,1};
    Solution s;
    cout << s.splitArray(v, 2);
}






