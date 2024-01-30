vector<int> printNos(int x) {
    // Write Your Code Here
    int res=0;
    if(res>=x){
        vector<int> res;
        return res;
    }
    else{
        vector<int> res = printNos(x-1);
        res.push_back(x);
        return res;
    }
}
