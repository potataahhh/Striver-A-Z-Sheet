void selectionSort(vector<int>&arr) {
    // Write your code here.

    int n = arr.size();
    int x;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[i]){
                x=arr[j];
                arr[j]=arr[i];
                arr[i]=x;
            }
        }
    }
}
