class Solution {
public:
    int gcd(int a, int b){
        while( b > 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;
        for(int i =1; i<=2*n ; i++){
            (i % 2==0) ? sumEven += i : sumOdd += i;
        }

        return gcd(sumOdd, sumEven);
    }
};