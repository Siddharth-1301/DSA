#include <iostream>
#include<vector>
using namespace std;
class Node{
public:
int data;
Node* next;
Node* back;

public:
Node(int data1,Node*next1,Node* back1){
    data=data1;
    next=next1;
    back=back1;
}
public:
Node(int data1){
    data=data1;
    next=nullptr;
    back=nullptr;
}
};

Node* convertArr2DLL(vector<int>&arr){
Node* head=new Node(arr[0]);
Node* prev=head;
for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    prev->next=temp;
    temp->back=prev;
    prev=temp;
}
return head;


};
void print(Node* head){
    while (head!=NULL)
    {
        
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
Node* deleteHead(Node* head){
    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
 

Node* deleteNthNode(Node* head,int n){
if(head==nullptr) return nullptr;
if(head->next==nullptr){
    delete head;
    return nullptr;
}
Node* temp=head;
while (temp->next!=nullptr)
{
    temp=temp->next;
    if(temp->data==n){
        Node* toDelete=temp;
        temp->back->next=temp->next;
        temp->next->back=temp->back;
        delete toDelete;
    }
    /* code */
}

}


Node* deleteTail(Node* head){
    if(head==NULL|| head->next==NULL) return NULL;

    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newTail=temp->back;
    newTail->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;
}
int main() {
    // Your code goes here

    vector<int>arr={12,5,8,7};
    Node* head=convertArr2DLL(arr);
    cout<<"Before Deleting Head: ";
    print(head);
    cout<<endl;
    Node *deleteHead1=deleteHead(head);
    cout<<"After Deleting Head: ";
    print(deleteHead1);
    cout<<endl;
    Node* deletetail=deleteTail(deleteHead1);
    
    print(deletetail);

    
    return 0;
}