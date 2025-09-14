#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size();
        if(digits[l-1] == 9){
            digits[l-1] = 0;
            if(l == 1){
                digits.insert(digits.begin(), 1);
                return digits;
            }
            else digits[l-2] += 1;
        }
        else{
            digits[l-1] += 1;
            return digits;
        }
        for(int i = l-2; i>=0; i--){
            if(digits[i] == 10){
                digits[i] = 0;
                if(i == 0){
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
                digits[i-1] += 1;
            }
        }
        return digits;
    }
};

int main(){
    vector<int>digits = {9};
    Solution sol;
    vector<int>ans = sol.plusOne(digits);
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}