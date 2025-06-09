#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next1;
    public:
    Node(int data1, Node* next2) {
        data = data1;
        next1 = next2;
    }
    public:
    Node(int data1) {
        data = data1;
        next1 = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
   Node *mover=head;
    for(int i=1;i<arr.size();i++){
     Node* temp=new Node(arr[i]);
     mover->next1=temp;
     mover=mover->next1;
    
    }
    return head;
}
Node* removesHead(Node* head){
    if(head==nullptr){
        return head;
    }
    Node* temp= head->next1;
    delete head;
    return temp;
}

Node* insertHead(Node* head,int val){
    return new Node(val,head);

}
int main() {


    vector<int> arr = {12, 5, 6, 7};
    Node* y = new Node(arr[0], nullptr);
    Node* res=convertArr2LL(arr);
    cout<<res->data<<"\n";
    cout << y->data<<"\n";
    Node* temp=res;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next1;
    }
  Node* result1=  removesHead(res);
  Node* head=insertHead(res,100);
  cout<<head->data;
//   cout<<result1->data<<"\n";
    return 0;
}
