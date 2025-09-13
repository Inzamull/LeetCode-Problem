#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(int i = 0; i<count; i++) nums.push_back(0);
    }
};

int main(){
    vector<int>nums = {0,1,0,3,12,0};
    Solution sol;
    sol.moveZeroes(nums);
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}