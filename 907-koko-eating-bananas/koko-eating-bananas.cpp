class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int pile : piles) {
            high = max(high, pile);
        }
        
        int result = high;
        
        while (low <= high) {
            int speed = low + (high - low) / 2;
            long long timetaken = 0; 
            
            for (int pile : piles) {
                timetaken += (pile + speed - 1LL) / speed;
            }
            
            if (timetaken <= h) {
                result = speed; 
                high = speed - 1;
            } else {
                low = speed + 1; 
            }
        }
        
        return result;
    }
};