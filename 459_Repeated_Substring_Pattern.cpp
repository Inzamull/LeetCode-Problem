#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string tmp = s + s;
        tmp.erase(0,1);
        tmp.erase(tmp.size()-1,1);
        int value = tmp.find(s);
        if(value >= 0) return true;

    return false;

    }
};

int main(){
    Solution sol;
    string s;
    cin >> s;
    cout << (sol.repeatedSubstringPattern(s) ? "true" : "false") << endl;
    return 0;
}