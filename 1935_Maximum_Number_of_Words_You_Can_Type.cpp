class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string tmp;
        int count = 0;
        bool b = true;
        bool k = true;
        for(int i = 0; i<text.size(); i++){
            if(text[i] == ' '){
                b = false;
                for(int j = 0; j<brokenLetters.size(); j++){
                    int val = tmp.find(brokenLetters[j]);
                    if(val >= 0) {
                        k = false;
                    }
                }
                if(k) count++;
                tmp = ' ';
            }
            else{
                tmp += text[i];
                k = true;
                b = true;
            }
        }
        if(b){
            for(int j = 0; j<brokenLetters.size(); j++){
                int val = tmp.find(brokenLetters[j]);
                if(val >= 0) k = false;
            }
            if(k) count++;
        }
        return count;
    }
};