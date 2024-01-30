vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.

    vector<int> res;

    int a=0,b=1,c;
    res.push_back(a);

    for(int i=1;i<n;i++){

        c=a+b;
        a=b;
        b=c;

        res.push_back(a);
    }
    return res;
}
