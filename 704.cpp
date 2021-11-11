// 704. Binary Search

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int b = 0;
    int e = nums.size() - 1;

    while (b <= e) {
      int m = (b + e) / 2;

      if (nums[m] > target) {
        e = m - 1;
      } else if (nums[m] < target) {
        b = m + 1;
      } else {
        return m;
      }
    }

    return -1;
  }
};