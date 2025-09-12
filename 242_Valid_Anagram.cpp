#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            for(int i = 0; i<s.size(); i++){
                int value = t.find(s[i]);
                if(value < 0) return false;
                else{
                    t.erase(value,1);
                }
            }
            return true;
        }
        else return false;
    }
};

int main(){
    Solution sol;
    string s,t;
    cin >> s >> t;
    cout << (sol.isAnagram(s, t) ? "true" : "false") << endl;
    return 0;
}

