class Solution {
public:
    vector<int> fixpos(vector<int>arr,int vel,int n){
        if(n<0){
            arr.push_back(vel);
            return arr;
        }
        if(arr[n]<=vel){
            arr.push_back(vel);
            return arr;
        }

        int data=arr.back();
        arr.pop_back();
        arr=fixpos(arr,vel,n-1);
        arr.push_back(data);
        return arr;
    }

    vector<int> helper(vector<int> nums,int n){
        vector<int>arr;
       if(n==0){
           arr.push_back(nums[n]);
           return arr;
       } 

       arr=helper(nums,n-1);
       arr=fixpos(arr,nums[n],n-1);
       return arr;
    }
    vector<int> sortArray(vector<int>& nums) {
        int n =nums.size()-1;
        vector<int>ans;
        ans=helper(nums,n);
        return ans;
    }
};