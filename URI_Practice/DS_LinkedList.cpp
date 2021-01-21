#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
// struct Node* head;
void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
   struct Node* temp = head;
   cout<<"List is: ";
   while(temp != NULL){
       cout<<temp->data<<endl;
       temp = temp->next;
   }
}
int main(){
    Node* head = NULL;
    cout<<"How many numbers?"<<endl;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the Number"<<endl;
        cin>>x;
        Insert(x);
        Print();
    }
}