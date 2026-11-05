#include<iostream>
using namespace std;

int main(){
	int arr[5] = {12, 45, 3, 27, 8};
	int n= 5;
	
	for(int i = 0; i<n-1;i++){
		int maxindex = i;
		
		for(int j= i+ 1; j<n;j++){
			if(arr[j] > arr[maxindex]){
				maxindex = j;
			}
		}
		
		int temp = arr[i];
		arr[i]= arr[maxindex];
		arr[maxindex] = temp;
	}
	
	cout<<"Decending Selection Sort "<<endl;
	for(int i = 0; i<n ; i++){
		cout<<" "<<arr[i];
		
	}
	
	
	
	return 0;
	
}
