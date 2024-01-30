vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here

    int n = v.size();
    map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }

    int maxi=0;
    int mini=0;

    int max = INT_MIN;
    int min = INT_MAX;

    for(auto &it:mp){
        if(it.second > max){
            max=it.second;
            maxi=it.first;
        }

        if(it.second<min){
            min=it.second;
            mini=it.first;
        }
    }
    return {maxi,mini};

}
