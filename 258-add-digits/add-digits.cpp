class Solution {
public:
    long int addDigits(int num) {
        long int sum = 0;
        if(num == 0)
            return 0;
        if(num>0 && num<=9)
            return num;

        return (num-1)%9 + 1;
    }
};