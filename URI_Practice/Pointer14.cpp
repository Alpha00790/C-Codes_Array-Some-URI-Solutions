#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {2,4,5,8,1};
    int i;
    for(i = 0;i < 5; i++){
        printf("Address =  %d\n",&A[i]);
        printf("Address = %d\n",A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
    }
}