#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int size_Array;
    int length;
};
void Display(struct Array arr)
{
    cout<<"Elements are:\n";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<" ";
}
int BinSearch(int a[], int l, int h, int key){
    int mid = 0;
    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid])
            return mid;
        else if(key<a[mid]){
            return BinSearch(a, l, mid-1, key);
        }
        else
            return BinSearch(a, mid+1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr = {{2,3,9,16,18,21,28,32,35},10,9};
    cout<<BinSearch(arr.A,0,arr.length,33);
}
