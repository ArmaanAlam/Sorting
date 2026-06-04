#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }

        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    
    return j;
}

void quickSort(vector<int> &arr, int low, int high){

    if(low >= high) return;

    int pivot = findPivot(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);

}

int main(void){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    quickSort(arr, 0, n-1);

    cout<<"Quick Sort : ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    

    return 0;
}