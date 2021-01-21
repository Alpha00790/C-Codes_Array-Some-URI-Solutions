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
int LinearSearch(struct Array *arr, int key){
    for(int i = 0; i < arr->length; i++){
        if(key == arr->A[i]){
            swap(arr->A[i], arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{2,23,14,5,6,9,8,12},10,8};
    cout<<LinearSearch(&arr1,5)<<endl;
    Display(arr1);
    return 0;
}
