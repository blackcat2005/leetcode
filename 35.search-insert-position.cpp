/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size();
        while (end - start > 1) {
            int i = start + (end - start) / 2;
            if (target > nums[i]) {
                start = i;
            } else {
                end = i;
            }
        }
        return target <= nums[start] ? start : end;
    }
};
// @lc code=end

