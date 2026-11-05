#include<iostream>
using namespace std;

int main(){
	
	cout<<"Enter the Choice (1 = Bubble, 2 = Selection, 3 = Insertion). ";
	int choo;
	cin>>choo;
	
	if(choo < 1 || choo > 3) {
    cout << "Invalid Option!" << endl;
    return 0;
    }
	
	int n;
	cout<<"Enter the n: "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"Enter the values "<<endl;
	for(int i =0;i<n;i++ ){
		cin>>arr[i];
	}
	
	
	
	switch(choo){
		case 1:cout<<" Bubble Sort "<<endl;
		for(int i=0; i<n-1; i++){
		for(int j= 0; j< n-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		 }
	    }
	    for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	   }
	   
	   break;
	    
	    
	    case 2:cout<<"Selection Sort "<<endl;
	    for(int i=0;i<n-1; i++){
		int minindex = i;
		for(int j=i+1 ; j<n; j++){
			if(arr[j]<arr[minindex]){
				minindex = j;
			}
		}
		int temp = arr[i];
		arr[i]= arr[minindex];
		arr[minindex] = temp ;
	    }
	
	 for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	   }
	   break;
	   
	   case 3:cout<<" Insertion Sort "<<endl;
	   
	   for(int i = 1; i<n; i++){
		int key= arr[i];
		int j = i-1;
		while(j >=0 && arr[j] > key ){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	   }
	
	
	  for(int i =0;i<n;i++ ){
		cout<<arr[i]<<" ";
	   }
	   break;
	   
	   default:cout<<"Invalid Option "<<endl;
	   break; 
   	
	}
	
	
	return 0;
}
