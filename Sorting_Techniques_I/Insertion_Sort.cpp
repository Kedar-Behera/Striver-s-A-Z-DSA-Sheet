void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i = 0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}