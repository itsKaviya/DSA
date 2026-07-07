class Solution {
public:
    long long reverseint(int num){
        long long rev = 0;
        while( num > 0){
            rev = (rev*10) + (num%10);
            num /= 10;
        }

        return rev;
    }

    long long sumAndMultiply(int n) {
        long long num =0, sum = 0;
        int number = reverseint(n);

        while(number > 0){
            int digit = number%10;
            if(digit != 0){
                num = (num*10)+digit;
                sum += digit;
            }
            number /= 10;
        }

        return num*sum;
    }
};