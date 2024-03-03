/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (haystack.size() < needle.size()) return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
            int j = 0;
            for (; j < needle.size(); ++j) {
                if (haystack[i + j] != needle[j]) break;
            }
            if (j == needle.size()) return i; // needle found
        }
        return -1; // needle not found
    }
};
// @lc code=end

