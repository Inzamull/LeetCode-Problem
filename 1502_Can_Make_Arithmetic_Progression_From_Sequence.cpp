#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = arr[1]- arr[0];
        for(int i = 0; i<arr.size() - 1; i++){
            int tmp = arr[i+1] - arr[i];
            if(tmp != count) return false;
        }
        return true;
    }
};

int main(){
    vector<int>nums = {3,5,1};
    Solution sol;
    int ans = sol.canMakeArithmeticProgression(nums);
    cout << ans;
}