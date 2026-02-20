class Solution {
    public int lengthOfLastWord(String s) {
        String words[] = s.split("\\s");
        int len = words.length;

        return words[len-1].length();
    }
}