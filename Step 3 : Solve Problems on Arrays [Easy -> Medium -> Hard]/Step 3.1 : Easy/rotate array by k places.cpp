vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.

    int n = arr.size();
    vector<int> res(n);
    

    for(int i=0;i<n;i++){
        res[(i+n-k)%n] = arr[i];
    }
    return res;
}
