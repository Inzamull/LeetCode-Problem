class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size();
        int result = 0;
        bool b = false;
        for(int i = l-1; i >= 0; i--){
            if(s[i] != ' '){
                result++;
            }
            if(result > 0 && s[i] == ' ') return result;
        }
        return result;
    }
};