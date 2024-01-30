vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.

    int i =0;

    for(int j=i+1;j<n;j++){
        if(a[i]==0){
            if(a[j]!=0){
                swap(a[i],a[j]);
                i++;
            }
        }
        else{
            i++;
        }
    }
    return a;
}


// 2nd approach

 int i=0;
        int j=0;

        while(j<n){
            if(a[j]==0){
                j++;
            }
            else{
                swap(a[i],a[j]);
                i++;
                j++;

            }
        }
        return a;
