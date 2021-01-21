#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n);
int main()
{
    int arr[] = {20,10,50,60,80,90,100,70,30,40};
    selectionsort( arr,10);
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
}


void selectionsort(int arr[],int n)
{
    int i,j,min_index;
    for(i = 0; i < n-1; i++)
    {
        min_index = i;
        for(j = i+1; j < n; j++)
            if(arr[j]<arr[min_index])
                min_index = j;
                    swap(arr[min_index],arr[i]);
    }
}
