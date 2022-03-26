class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 2) return {};
        int a, b, c, P1, P2;
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        vector<int> v;
        for(int i = 0; i < nums.size()-2; i++){
                if(i==0 || (i > 0 and nums[i] != nums[i-1]) ){
                    c = -1 * nums[i];
            P1 = i+1;
            P2 = nums.size()-1;
            while(P1 < P2){
                if(nums[P1] + nums[P2] == c){
                    v = {};
                    v.push_back(nums[P1]);
                    v.push_back(nums[P2]);
                    v.push_back(nums[i]);
                    answer.push_back(v);
                    
                    while (P1 < P2 && (nums[P1] == nums[P1 + 1]))
                        P1++;
                    while (P1 < P2 && (nums[P2] == nums[P2 - 1]))
                        P2--;
                    ++P1;
                    --P2;
                    }else if(nums[P1] + nums[P2] < c) ++P1;
                    else --P2;
                }
            }
        }
        return answer;
    }
};