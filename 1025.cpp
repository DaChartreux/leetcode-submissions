// https://leetcode.com/problems/divisor-game/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool divisorGame(int n) { return (n & 1) == 0; }
};