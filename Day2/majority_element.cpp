class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hMap;
        for(auto a: nums){
            hMap[a]++;
            if(hMap[a]>nums.size()/2) return a;
        };
        return -1;
    }
};