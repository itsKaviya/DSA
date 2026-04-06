class Solution {
    public int reverseBits(int n) {
    int  binaryNum = 0;

    for(int i=0;i<32;i++){
        binaryNum <<= 1;

        if((n&1) == 1){
            binaryNum |= 1;
        }

        n >>= 1;
    }
    
    return binaryNum;
    }
}