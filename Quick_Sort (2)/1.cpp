#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;
	
	for(int j= low ; j < high ; j++){
		if(arr[j] < pivot ){
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp ;  
		}
	}
	
	int temp = arr[i+1];
	arr[i+1] = arr[high];
	arr[high] = temp;
	
	return i + 1;
}

void quick_sort(int arr[],int low , int high){
	if(low < high){
		int p = partition(arr, low, high);
		quick_sort(arr, low , p-1);
		quick_sort(arr, p+1 , high);
	}
}

int main(){
	int arr[6]= {12, 7, 25, 4, 18, 9};
	int n = 6;
	
	quick_sort(arr, 0 , n-1);
	
	cout<<" Sort Method "<<endl;
	
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<"  ";
	}
}