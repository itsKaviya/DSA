class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int peak = 0;
        // if(arr.size() == 0){    return 0;   }

        // for(int i=1;i<arr.size(); i++){
        //     if(arr[i] > arr[i-1]){
        //         peak = i;
        //     }
        // }

        // return peak;

        //Using Binary search
        int left = 0;
        int right = arr.size()-1;

        while( left < right){
            int mid = left + (right - left)/2;

            if(arr[mid] < arr[mid+1]){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return left ;
    }
};