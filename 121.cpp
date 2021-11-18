// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    const int n = prices.size();
    int mi = INT_MAX;
    int p = 0;

    for (int i = 0; i < n; ++i) {
      p = max(prices[i] - mi, p);
      mi = min(mi, prices[i]);
    }

    return p;
  }
};