#include<iostream>
#include<vector>
using namespace std;

void recusive_bubble(vector<int> &arr, int n){

    if(n == 1) return;
    int didswap = 0;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            didswap = 1;
        }
        
    }
    if(didswap = 0) return;
    recusive_bubble(arr, n - 1);
}

int main(void){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    recusive_bubble(arr, n);

    cout<<"Recursive Bubble Sort : ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    


    return 0;
}