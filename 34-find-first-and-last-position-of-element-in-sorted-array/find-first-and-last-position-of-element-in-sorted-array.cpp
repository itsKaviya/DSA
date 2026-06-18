class Solution {
public:
    int search_first(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while ( low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }

    int search_last(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while ( low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid+1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = search_first(nums, target);
        int last = search_last(nums, target);

        return {first, last};
        
    }
};