class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      int left = 1, right = 1e6, m, sum;
        while (left <=right) {
            m = (left + right) / 2, sum = 0;
            for (int i : nums)
              i%m == 0 ? sum += (i/m) : sum += (i/m)+1;
            if (sum > threshold)
                left = m + 1;
            else
                right = m-1;
        }
        return left;
    }
};