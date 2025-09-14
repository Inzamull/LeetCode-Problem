#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        for(int i =0; i<nums.size() - 1; i++){
            if(nums[i] < nums[i+1]){
                for(int i = 0; i<nums.size()-1; i++){
                    if(nums[i] > nums[i+1]) return false;
                }
                return true;
            }
            else if(nums[i] > nums[i+1]){
                for(int i = 0; i<nums.size()-1; i++){
                    if(nums[i] < nums[i+1]) return false;
                }
                return true;
            }
        
        }  
    return true;
    }
};


int main(){
    vector<int> nums = {1,1,0};

    Solution sol;
    int ans = sol.isMonotonic(nums);
    cout<<ans<<endl;
}