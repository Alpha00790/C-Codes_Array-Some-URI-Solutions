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
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}
int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void insert_sort(struct Array *arr, int x)
{
    int i = arr->length-1;
    if(arr->length == arr->size_Array)
        return;
    while(x<arr->A[i]){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}
void pos_neg(struct Array *arr)
{
    int i = 0;
    int j = arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(arr->A[i],arr->A[j]);
        }
    }
}
int main()
{
    struct Array arr = {{-2,3,5,-16,18,-21},10,6};
    ///cout<<isSorted(arr)<<endl;
    ///insert_sort(&arr,4);
   /// insert_sort(&arr,1);
   pos_neg(&arr);

    Display(arr);
    return 0;
}
