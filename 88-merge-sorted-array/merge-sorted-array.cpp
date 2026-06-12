class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Method1:
        // vector<int> res;
        // for(int i=0;i<m;i++) 
        //     res.push_back(nums1[i]);
        // for(int i=0;i<n;i++) 
        //     res.push_back(nums2[i]);
        // int len = res.size();
        // for(int i=0;i<len-1;i++){
        //     for(int j=0;j<len-i-1;j++){
        //         if(res[j]>res[j+1]){
        //             int temp = res[j];
        //             res[j] = res[j+1];
        //             res[j+1] = temp;
        //         }
        //     }
        // }
        // for(int i=0;i<len;i++){
        //     nums1[i] = res[i];
        // }

        // Method 2:
        // for(int i=0;i<n;i++){
        //     nums1[m++] = nums2[i];
        // }
        // sort(nums1.begin(), nums1.end());

        // Method 3:
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j >=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};