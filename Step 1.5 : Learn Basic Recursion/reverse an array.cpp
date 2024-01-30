vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.

    vector<int> res;
    int temp = n-1;

    for(int i=0;i<n;i++){
        res.push_back(nums[temp]);
        temp--;
    }
    return res;

}
