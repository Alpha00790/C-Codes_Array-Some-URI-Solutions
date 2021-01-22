#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    vector<int>myvector;
    int x,y;
    cin>>x>>y;
    if(x>y){
        swap(x,y);
    }
    i=x+1;
    while(i<y){
        if(i%2!=0){
            myvector.push_back(i);
        }


        i++;
    }
        cout<<accumulate(myvector.begin(),myvector.end(),0)<<endl;


}
