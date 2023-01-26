class Solution {
public:
    void helper(vector<int>candidates,vector<vector<int>> &ans,vector<int>ds,int target,int i){
        if(i==candidates.size()){
            if(target==0)
            ans.push_back(ds);
            return ;
        }

        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            helper(candidates,ans,ds,target-candidates[i],i);
            ds.pop_back();
        }
        helper(candidates,ans,ds,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(candidates,ans,ds,target,0);
        return ans;
    }
};