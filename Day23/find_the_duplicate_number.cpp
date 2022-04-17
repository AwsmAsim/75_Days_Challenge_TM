class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int t = nums[0], r = nums[0];
        bool firstRun = true;
        while(firstRun or t!=r){
            t = nums[t];
            r = nums[nums[r]];
            firstRun = false;
        }
        t = nums[0];
        while(t != r){
            t = nums[t];
            r = nums[r];
        }
        
        return r;
    }
};