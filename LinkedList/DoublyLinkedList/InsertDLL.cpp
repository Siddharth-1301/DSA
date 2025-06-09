#include <iostream>
#include<vector>

using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node* back;
  public:
  Node(int data,Node*next,Node*back){
    this->data=data;
    this->next=next;
    this->back=back;
  }
  public:
  Node(int data){
    this->data=data;
    this->next=nullptr;
    this->back=nullptr;
  }
};
Node* convertArr2DLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=temp;
    }
    return head;
    
    
}
Node* insertBeforeHead(Node* head,int data){
    Node* newHead=new Node(data);
    newHead->next=head;
    head->back=newHead;
    return newHead;
}
Node* insertBeforeTail(Node* head,int data){
    Node* temp=head;

    if(head==nullptr) return new Node(data);
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode=new Node(data);

    Node*prev=temp->back;
    prev->next=newNode;
    newNode->back=prev;
    
    newNode->next=temp;
    prev=newNode;
    return head;
}
Node* insertBeforeKthElement(Node* head,int data,int k){
    Node* temp=head;
    int count=1;
    if(head==NULL) return new Node(data);
    while (temp!=NULL)
    {
        temp=temp->next;
        count++;
        if(count==k) break;
        /* code */
    }
    Node* newNode=new Node(data);
    Node* prev= temp->back;
    prev->next=newNode;
    newNode->back=prev;
    newNode->next=temp;
    temp->back=newNode;
    return head;
    
}
void insertBeforeNode(Node* node,int data){
    Node* prev=node->back;
    Node* newNode=new Node(data,node,prev);
    prev->next=newNode;
    newNode->back=prev;
    newNode->next=node;
    // node->back=newNode;
   
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";

      head=head->next;
    }
}

int main() {

    // Your code goes here
    vector<int>arr={2,3,4,5,6,7};
    Node* head=convertArr2DLL(arr);
    Node*insertHead=insertBeforeHead(head,1);
    print(insertHead);
    Node* insertB4Tail=insertBeforeTail(insertHead,8);
    cout<<endl;
    print(insertB4Tail);
    cout<<endl;
    Node* insertKBefore=insertBeforeKthElement(insertB4Tail,9,3);
    print(insertKBefore);

    cout<<endl;
    insertBeforeNode(insertKBefore->next->next,10);
    print(insertKBefore);
    return 0;
}