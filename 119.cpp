// https://leetcode.com/problems/pascals-triangle-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<vector<int>> triangle(rowIndex + 1);

    vector<int> row1(1);
    row1[0] = 1;

    triangle[0] = row1;

    for (int i = 1; i < rowIndex + 1; ++i) {
      vector<int> row(i + 1);

      for (int j = 0; j <= i; ++j) {
        if (j == 0 || j == i) {
          row[j] = 1;
        } else {
          row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
      }

      triangle[i] = row;
    }

    return triangle[rowIndex];
  }
};