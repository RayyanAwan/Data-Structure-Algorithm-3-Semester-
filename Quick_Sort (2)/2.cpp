#include<iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int partition(int arr[], int low, int high){
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
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n <= 0){
        cout<<"Invalid array size"<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    display(arr, n);
    int choice;
    cout<<"Select Sorting Algorithm:"<<endl;
    cout<<"1. Merge Sort"<<endl;
    cout<<"2. Quick Sort"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1){
        mergeSort(arr, 0, n - 1);
        cout<<"Using Merge Sort"<<endl;
    }
    else if(choice == 2){
        quickSort(arr, 0, n - 1);
        cout<<"Using Quick Sort"<<endl;
    }
    else{
        cout<<"Invalid Choice"<<endl;
        return 0;
    }
    cout<<"Sorted Array: ";
    display(arr, n);
    return 0;
}
