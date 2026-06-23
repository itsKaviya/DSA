class Solution {
public:
    int squareSum(int val){
        int sum = 0;
        while(val > 0){
            int digit = val%10;
            sum += (digit*digit);
            val /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do{
            slow = squareSum(slow);
            fast = squareSum(squareSum(fast));
        }while(slow != fast);

        return fast==1;
    }
};