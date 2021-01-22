#include<bits/stdc++.h>
using namespace std;
// int Fsort(int arr[]){

// }
int main(){
    int arr[2];
    for(int i =0;i<3;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}