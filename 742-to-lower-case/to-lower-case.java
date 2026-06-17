class Solution {
    public String toLowerCase(String s) {
        char chars[] = s.toCharArray();

        if(s == null){  return null;    }

        for(int i =0;i<chars.length;i++){
            if(chars[i] >= 'A' && chars[i] <= 'Z'){
                chars[i] = (char)(chars[i] + 32);
            }else{
                continue;
            }   
        }

        return new String(chars);
    }
}