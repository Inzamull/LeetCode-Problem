#include<iostream>
#include<string>
#include<map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        map<char, int>maps = { 
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}

        };
        int value = 0;
        for(int i = 0; i<s.size();i++){
            if(i+1 <= s.size() && maps[s[i]] >= maps[s[i+1]]) value += maps[s[i]];
            else value -= maps[s[i]]; 
        }
        return value;
    }
};

int main(){
    string s;
    cin>>s;
    Solution sol;
    int ans = sol.romanToInt(s);
    cout<<ans<<endl;

}