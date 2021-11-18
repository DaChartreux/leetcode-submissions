// https://leetcode.com/problems/is-subsequence/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isSubsequence(string s, string t) {
    const int s_n = s.size();
    const int t_n = t.size();

    int j = 0;

    for (int i = 0; i < s_n; ++i, ++j) {
      bool found = false;
      for (; j < t_n; ++j) {
        if (t[j] == s[i]) {
          found = true;
          break;
        }
      }

      if (!found) {
        return false;
      }
    }

    return true;
  }
};