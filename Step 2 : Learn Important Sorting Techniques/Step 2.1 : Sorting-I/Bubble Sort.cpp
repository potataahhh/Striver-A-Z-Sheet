// compare adjacent elements i.e. arr[i] and arr[i+1]

void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here

    if(n==1){
        return;
    }
    int x;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            x=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=x;
        }
    }

    bubbleSort(arr,n-1);
}
