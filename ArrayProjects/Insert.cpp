#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int sizeof_Array;
    int length;
};
void Display(struct Array arr){
    cout<<"\nElements are\n";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<" ";
}
void Append(struct Array *arr,int x){
    if(arr->length<arr->sizeof_Array)
    {
        arr->A[arr->length++]=x;
    }
}
void Insert(struct Array *arr, int index, int x){
    if(index>=0 && index <= arr-> length)
    {
        for(int i = arr->length; i > index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

    // Append(&arr,20);
    Insert(&arr,3,20);
    
    Display(arr);
} 