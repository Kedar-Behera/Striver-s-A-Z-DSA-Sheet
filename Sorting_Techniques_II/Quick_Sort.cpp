/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int low, int high) {
    int pivot = arr[low];
	int i = low;
	int j = high;
	while(i<j){
		while(arr[i]<=pivot && i<=high-1){
			i++;
		}
		while(arr[j]>pivot && j>=low-1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int partitionIdx = partitionArray(input,start,end);
		quickSort(input,start,partitionIdx-1);
		quickSort(input,partitionIdx+1,end);
	}
}