class Solution {
public:
    int calPoints(vector<string>& operations) {
        int value = 0;
        vector<int>v;
        for(int i = 0; i<operations.size(); i++){
            size_t l = v.size();
            if(operations[i] == "C"){
                v.pop_back();
            } 
            else if(operations[i] == "D") v.push_back(v[l-1] * 2);
            else if(operations[i] == "+") v.push_back(v[l-1] + v[l-2]);
            else{
                v.push_back(stoi(operations[i]));
           
            }

        }
        for(int x : v){
             value += x;
        }
        return value;
    }
};