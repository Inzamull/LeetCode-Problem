#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int n = min(word1.size(), word2.size());
        for(int i = 0; i<n; i++){
            result += word1[i];
            result += word2[i];
        }
        if(word1.size() > word2.size()){
            int l = word1.size() - word2.size();
            string temp = word1.substr(word2.size(), l);
            result += temp;
        }
        else if(word1.size() < word2.size()){
            int m = word2.size() - word1.size();
            string temp = word2.substr(word1.size(), m);
            result += temp;
        }
        return result;
    }
    
};


int main() {
    string word1, word2;
    cin >> word1 >> word2;
    Solution solution;
    string result = solution.mergeAlternately(word1, word2);
    cout << result << endl;
    return 0;
}