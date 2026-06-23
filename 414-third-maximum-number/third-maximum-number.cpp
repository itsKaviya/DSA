class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long  first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;
        for(int i : nums){
            // to check duplicate number
            if(i==first || i==second || i==third){
                continue;
            }

            if(i > first){
                third = second;
                second = first;
                first = i;
            }else if(i>second){
                third = second;
                second = i;
            }else if(i>third){
                third = i;
            }
        }
        return third==LLONG_MIN ? first : third;
    }
};