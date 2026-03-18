class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;

        for(int i=0;i<m;i++) 
            res.push_back(nums1[i]);
        for(int i=0;i<n;i++) 
            res.push_back(nums2[i]);

        int len = res.size();
        for(int i=0;i<len-1;i++){
            for(int j=0;j<len-i-1;j++){
                if(res[j]>res[j+1]){
                    int temp = res[j];
                    res[j] = res[j+1];
                    res[j+1] = temp;
                }
            }
        }
        
        for(int i=0;i<len;i++){
            nums1[i] = res[i];
        }
    }
};