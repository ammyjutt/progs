

#include <cmath>
#include <iostream>
using namespace std;


class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int times = minutesToTest / minutesToDie; // Rounds of testing possible
        int result = 0; // Minimum number of pigs

        // Calculate the minimum pigs needed
        while (pow(times + 1, result) < buckets) {
            ++result;
        }

        return result;
    }
};
