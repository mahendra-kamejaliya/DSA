class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum1=0,sum2=0;
        int n=nums.size(); 
        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }
        sum2=n*(n+1)/2;
        return sum2-sum1;
    }
};