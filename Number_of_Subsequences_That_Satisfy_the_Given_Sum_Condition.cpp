class Solution {
    int helper(vector<int>nums,int target,int i,int n,vector<int>ans){
       if(i==n){
            if(!ans.empty()){
            sort(ans.begin(),ans.end());
            int min=ans.front();
            int max=ans.back();
            int sum=min+max;
            if(sum<=target)
             return 1;
                else return 0;
            }
            else return 0;
        }
        
        ans.push_back(nums[i]);
        int p=helper(nums,target,i+1,n,ans) % 1000000000;
        ans.pop_back();
        int np=helper(nums,target,i+1,n,ans) % 1000000000;
        
        return (p+np) % 1000000000;
    }
public:
    int numSubseq(vector<int> nums, int target) {
        int n=nums.size();
        vector<int>ans;
        int res=helper(nums,target,0,n,ans);
        return res % 1000000000;
    }
};