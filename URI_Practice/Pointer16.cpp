#include<bits/stdc++.h>
using namespace std;
void Double(int *A, int size){
    int i, sum = 0;
    for(i=0;i<size;i++){
        A[i] = 2*A[i];
    }
}
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int i;
    Double(A,size);
    for(i=0;i<size;i++){
        cout<<A[i]<<endl;
    }
}
