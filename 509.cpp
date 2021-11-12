// https://leetcode.com/problems/fibonacci-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; ++i) {
      b = a + b;
      a = b - a;
    }

    if (n == 0) {
      return a;
    }

    return b;
  }
};