#include<iostream>
#include<vector>
using namespace std;

void recusive_insertion(vector<int> &arr, int i, int n){

    if(i == n) return;

    int j = i;

    while(j > 0 && arr[j-1] > arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }

    recusive_insertion(arr, i+1, n);
}

int main(void){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    recusive_insertion(arr, 0, n);

    cout<<"Recursive Insertion Sort : ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}