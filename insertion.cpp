#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int> &arr, int n){

    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(void){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    insertion(arr, n);

    cout<<"Insertion Sort : ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    

    return 0;
}