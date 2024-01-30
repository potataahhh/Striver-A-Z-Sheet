//create a array to store the elements
// take 2 var maxi,mini and initialize it with 0
//check for max element 
// check if current element is smaller than maxi and greater than mini
// push it back to vector



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    vector<int> res;
    int maxi=0,mini=0;

    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]<maxi && a[i]> mini){
            mini=a[i];
        }
    }
    res.push_back(mini);

    int x=maxi;
    int y=maxi;

    for(int i=0;i<n;i++){
        if(a[i]<x){
            x=a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>x && a[i]<y){
            y=a[i];
        }
    }

    res.push_back(y);
    return res;
    
}
