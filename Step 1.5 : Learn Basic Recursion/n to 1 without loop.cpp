
void f(vector<int> &vec,int x){
    if(x<1) return;
    vec.push_back(x);
    f(vec,x-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    
    vector<int> vec;
    f(vec,x);
    return vec;
}
