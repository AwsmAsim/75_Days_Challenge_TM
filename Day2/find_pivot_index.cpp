class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), pivot=-1;
        vector<int> freqLeft(n, 0), freqRight(n, 0);
        freqLeft[0] = nums[0];
        freqRight[n-1] = nums[n-1]; 
        for(int i = 1; i < n; i++) freqLeft[i] = nums[i] + freqLeft[i-1];
        for(int i = n-2; i >= 0; i--) freqRight[i] = nums[i] + freqRight[i+1];
        for(int i = 0; i < n; i++){
            if(freqRight[i] == freqLeft[i]) {
                pivot = i;
                break;
            }
        }
        
        return pivot;
    }
};