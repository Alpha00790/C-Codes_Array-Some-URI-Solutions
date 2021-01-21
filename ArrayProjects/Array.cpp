#include<bits/stdc++.h>
using namespace std;
struct Array{
    int *A;
    int sizeof_Array;
    int length;
};

void Display(struct Array arr){
    cout<<"\nElements are:\n";
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}
int main()
{
    struct Array arr;
    cout<<"Size of an array:";
    cin>>arr.sizeof_Array;
    arr.A = new int[arr.sizeof_Array];
    arr.length = 0;
    cout<<"Enter number of Numbers:";
    int n;
    cin>>n;
    cout<<"Enter all elements:\n";
    for(int i = 0; i < n; i++){
        cin>>arr.A[i];
    }
    arr.length = n;

    Display(arr);

    return 0;
}
