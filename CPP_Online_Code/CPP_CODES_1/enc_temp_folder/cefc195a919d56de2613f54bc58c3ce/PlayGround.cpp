using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>




class Solution {
public:

    int findKthNumber(int m, int n, int k) {


        int left = 1;
        int right = m * n;

        auto numbers_less_than_equal_to = [&](int current) -> int
            {

                int end = min(n, current);

                int count = 0;
                for (int i = 1; i <= end; i++)
                {
                    count += min(n,current/i);
                }
                return count;
            };

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (numbers_less_than_equal_to(mid) < k)
                left = mid + 1;
            else
                right = mid;
        }


        return left;
    }
};



int main()
{
    Solution s;
    cout << s.findKthNumber(2,3,6) << endl;
	

}


