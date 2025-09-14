#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for(int x: nums){
            if(x == 0) return 0;
            if(x < 0) count++;
        }
        if(count % 2 == 0) return 1; 
        else return -1;
    }
};


int main(){
    vector<int>nums = {-1,-2,-3,-4,3,2,1};
    Solution sol;
    int ans = sol.arraySign(nums);
    cout << ans;
}