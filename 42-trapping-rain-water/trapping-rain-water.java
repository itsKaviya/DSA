class Solution {
    public int trap(int[] height) {
        int left = 0;
        int right = height.length-1;
        int res = 0;

        int lmax = height[left];
        int rmax = height[right];
        while(left <= right){
            

            if(lmax<rmax){
                lmax = Math.max(lmax,height[left]);
                res += lmax - height[left];
                left++;
            }else{
                rmax = Math.max(rmax,height[right]);
                res += rmax - height[right];
                right--;
            }
        }

        return res;
    }
}