// https://leetcode.com/problems/climbing-stairs/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int climbStairs(int n) {
    int a = 1;
    int b = 2;

    if (n < 4) {
      return n;
    }

    for (int i = 2; i < n; ++i) {
      b = b + a;
      a = b - a;
    }

    return b;
  }
};
