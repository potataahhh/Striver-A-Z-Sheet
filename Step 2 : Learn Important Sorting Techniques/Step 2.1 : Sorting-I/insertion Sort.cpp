void insertionSort(int arr[], int n)
{
    //write your code here
    int x;

    for(int i=0;i<=n-1;i++){
        int j=i;

        while(j>0 && arr[j-1]>arr[j]){
            x=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=x;
            j--;
        }
    }
}
