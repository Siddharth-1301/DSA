#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next1;
    public:
    Node(int data,Node* next){
    this->data=data;
    this->next1=next;
    }
    public:
    Node(int data){
        this->data=data;
       this->next1=nullptr;
    }
// return data;
};
Node* convertArr2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);      //Loop Creates a list
        mover->next1 = temp;
        mover = mover->next1;
    }
    return head;
}


Node* removesTail(Node* head){
    if(head==nullptr) return nullptr;
    if(head->next1==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp=head;
    while(temp->next1->next1!=nullptr){
     temp=temp->next1;
    }
    delete temp->next1;
    temp->next1=nullptr;

    return head;

};
int main() {
    // Your code goes here
    vector<int> arr = {12, 5, 6, 7};
    Node* y=new Node(arr[0],nullptr);
    Node* res=convertArr2LL(arr);
    Node* rem=removesTail(res);
    Node* t = rem;
    while (t != nullptr) {
        cout << t->data << " ";
        t = t->next1;
    }
    
    return 0;
}