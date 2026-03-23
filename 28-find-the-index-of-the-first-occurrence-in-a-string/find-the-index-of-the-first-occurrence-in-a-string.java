class Solution {
    public int strStr(String haystack, String needle) {
        int arr[] = new int[100];

        arr[0] = haystack.indexOf(needle);

        return arr[0];
    }
}