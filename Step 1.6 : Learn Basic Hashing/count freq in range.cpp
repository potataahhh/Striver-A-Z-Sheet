// create a vector to sotre the frequency
// use map to find the frequency of the elements in the array
// insert all the freq in the vector
// return vector


#include<unordered_map>
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.

    vector<int> vec(n);
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[nums[i]]++;         
    }

    for(int i=0;i<n;i++){

        vec[i]=mp[i+1];
    }
    
    return vec;

}
