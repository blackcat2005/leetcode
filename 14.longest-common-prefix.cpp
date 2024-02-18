/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1) return strs[0];

        int k = -1, i = 0, j = 0, minlength = 201;
        while(i < minlength) {
            j = 0;
            for(; j < n; ++j) {
                if(i == 0)
                    minlength = min(minlength, (int)strs[j].size());

                if(strs[j].empty()) return "";
                if(strs[0][i] != strs[j][i]) 
                    break;
            }

            if(j == n) {
                ++k;
            } else {
                break;
            }
            ++i;
        }

        if(k == -1) return "";
        else return strs[0].substr(0, k + 1);

    }
};
// @lc code=end

