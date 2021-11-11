// https://leetcode.com/problems/first-bad-version/

#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
 public:
  int firstBadVersion(int n) {
    int b = 0;
    int e = n;

    while (b <= e) {
      int m = b + (e - b) / 2;
      bool isBadM = isBadVersion(m);

      if (isBadM) {
        bool isBadPM = isBadVersion(max(m - 1, 0));

        if (isBadPM) {
          e = m - 1;
        } else {
          return m;
        }
      } else {
        b = m + 1;
      }
    }

    return n;
  }
};