class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0, right = n - 1;
        int pos = n - 1;  

        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];

            if (l > r) {
                result[pos--] = l;
                left++;
            } else {
                result[pos--] = r;
                right--;
            }
        }

        return result;
    }
};