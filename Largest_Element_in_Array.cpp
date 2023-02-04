class Solution
{
public:

    int largest(vector<int> &arr, int n)
    {
        if(n==1)
        return arr[0];
        return max(arr[n-1],largest(arr,n-1));
    }
};
