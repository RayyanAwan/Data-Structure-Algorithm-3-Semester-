
#include<iostream>
using namespace std;

int count = 0;

int partition(int arr[], int low, int high){
    int mid = low + (high - low) / 2;

    int temp = arr[mid];
    arr[mid] = arr[high];
    arr[high] = temp;

    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        count++;

        if(arr[j] < pivot){
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp2 = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp2;

    return i + 1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {10,9,8,7,6,5,4,3,2,1};
    int arr3[10] = {4,9,1,7,3,10,6,2,8,5};

    cout<<"Already Sorted Array:"<<endl;
    count = 0;
    quickSort(arr1, 0, 9);
    display(arr1, 10);
    cout<<"Comparisons: "<<count<<endl;

    cout<<endl<<"Reverse Sorted Array:"<<endl;
    count = 0;
    quickSort(arr2, 0, 9);
    display(arr2, 10);
    cout<<"Comparisons: "<<count<<endl;

    cout<<endl<<"Random Array:"<<endl;
    count = 0;
    quickSort(arr3, 0, 9);
    display(arr3, 10);
    cout<<"Comparisons: "<<count<<endl;

    return 0;
}
