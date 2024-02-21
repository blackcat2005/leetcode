/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0, i = 0;
        while(i < nums.size()) {
            while(i < nums.size() && nums[i] == val) ++i;
            if(i < nums.size()) {
                nums[j] = nums[i];
                ++j; ++i;
            }
        }
        return j;
    }
};
// @lc code=end

