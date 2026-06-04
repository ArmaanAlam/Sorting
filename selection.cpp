#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int> &arr, int n){

    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            swap(arr[i], arr[min_index]);
        }
    }
}


int main(void){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    selection(arr, n);

    cout<<"Selection Sort : ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    


    return 0;
}