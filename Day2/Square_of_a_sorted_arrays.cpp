class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int P1 = 0, P2 = nums.size()-1, tmp;
        for(int i = 0; i < nums.size(); i++) nums[i] *= nums[i];
        vector<int> answer;
        while(P1<P2){
            if(nums[P1]>nums[P2]){
                answer.push_back(nums[P1]);
                ++P1;
            }else{
                answer.push_back(nums[P2]);
                --P2;
            }
        }
        answer.push_back(nums[P1]);
        reverse(answer.begin(), answer.end());
        return answer;
    }
};