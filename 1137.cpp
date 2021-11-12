// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int tribonacci(int n) {
    int a = 0;
    int b = 1;
    int c = 1;

    for (int i = 2; i < n; ++i) {
      int bb = b;
      c = a + b + c;
      b = c - (b + a);
      a = bb;
    }

    if (n == 0) {
      return a;
    } else if (n == 1) {
      return b;
    } else {
      return c;
    }
  }
};