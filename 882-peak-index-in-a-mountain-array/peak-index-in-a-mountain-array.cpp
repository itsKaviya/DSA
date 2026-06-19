class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak = 0;
        if(arr.size() == 0){    return 0;   }

        for(int i=1;i<arr.size(); i++){
            if(arr[i] > arr[i-1]){
                peak = i;
            }
        }

        return peak;
    }
};