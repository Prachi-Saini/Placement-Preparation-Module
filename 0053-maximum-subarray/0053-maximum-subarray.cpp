class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN;
        //kadane's algorithms
        for(int i=0;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            ans=max(ans,sum);
        }
        return ans;
    }
        
};