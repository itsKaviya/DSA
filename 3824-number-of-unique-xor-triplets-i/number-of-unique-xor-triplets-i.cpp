class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int size = nums.size();

        if(size < 3)    return size;

        int p = 1;
        while(p <= size)   p <<= 1;

        return p;
    }
};