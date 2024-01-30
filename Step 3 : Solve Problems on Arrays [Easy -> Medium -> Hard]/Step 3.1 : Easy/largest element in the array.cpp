#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    int maxi=arr[0];
    
    for(int i=1;i<n;i++){
        if(maxi<arr[i])
        maxi=arr[i];
    }
    return maxi;
}
