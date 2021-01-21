#include<bits/stdc++.h>
using namespace std;
int SumofElements(int A[],int size){
    int i,sum = 0;
    for(i=0;i<size;i++){
        sum = sum + A[i];
    }
    return sum;
}
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    cout<<sizeof(A)<<endl;
    cout<<sizeof(A[0])<<endl;
    cout<<size<<endl;
    int total = SumofElements(A,size);
    cout<<total;
}
