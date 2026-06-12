class Solution {
    public boolean isPalindrome(String s) {
        String str = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();


        int st = 0;
        int en = str.length()-1;

        while(st < en){
            if(str.charAt(st) != str.charAt(en)){ return false;}
            st++;
            en--;
        }
        return true;
    }
}