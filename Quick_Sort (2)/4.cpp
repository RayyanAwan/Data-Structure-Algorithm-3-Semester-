
#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int low, int high, int n){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    cout<<"Pivot: "<<pivot<<endl;
    cout<<"Array after Partition: ";
    display(arr, n);

    return i + 1;
}

void quickSort(int arr[], int low, int high, int n){
    if(low < high){
        int p = partition(arr, low, high, n);

        quickSort(arr, low, p - 1, n);
        quickSort(arr, p + 1, high, n);
    }
}

int main(){
    int arr[6] = {30, 45, 55, 50, 70, 25};
    int n = 6;

    cout<<"Original Array: ";
    display(arr, n);

    quickSort(arr, 0, n - 1, n);

    cout<<"Final Sorted Array: ";
    display(arr, n);

    return 0;
}
