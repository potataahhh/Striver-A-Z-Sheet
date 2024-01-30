long long fact(long long ans){

    if(ans==1) return 1;
    return ans*fact(ans-1);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    
    vector<long long> res;
    long long ans;

    for(long long i=1;i<=n;i++){
        ans=fact(i);
        if(ans>n) return res;
        else 
        res.push_back(ans);
    }
}
