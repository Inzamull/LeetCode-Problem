#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c;
        for(int i = 0; i< t.size(); i++){
            int value = s.find(t[i]);
            if(value < 0){
                c = t[i];
                break;
            }
            s.erase(value,1);
        }
        return c;
    }
};

int main(){
    Solution sol;
    string s,t;
    cin >> s >> t;
    cout << sol.findTheDifference(s, t) << endl;
    return 0;
}