#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {

        int l = 0;
        int len_nums = nums.size();
        int r = len_nums - 1;
        while (l < r) {
            if (nums[l] < nums[r])
            {
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        if (l == r)
            return 1;
        if(l > r)
			return 0;
        return r - l + 1;

    }
};


int main() {




}








