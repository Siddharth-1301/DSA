#include <iostream>
#include<stack>
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
Node* reverseDLL(Node* head){
    if(head==nullptr|| head->next==nullptr) return head;
    stack<Node*> s;
    Node*temp=head;
    while(temp!=nullptr){
        s.push(temp);
        temp=temp->next;

    }
    head=s.top();
    Node* prev=nullptr;
    while (!s.empty())
    {
        Node* curr=s.top();
        s.pop();
        curr->back=prev;
        if(!s.empty()){
            curr->next=s.top();
            // s.pop();
        }else{
            curr->next=nullptr;
        }
        prev=curr;

        /* code */
    }
    return head;
    
}  

Node* reverseDLL2(Node* head){
    Node* temp=head;
    Node*prev=nullptr;
    if(head==nullptr|| head->next==nullptr) return head;
    while(temp!=nullptr){
        prev=temp->back;
        temp->back=temp->next;
        temp->next=prev;
        temp=temp->back;

    }
    return prev->back;
}
void printDLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

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
    
     
int main() {
    // Your code goes here
    vector<int>arr={12,5,8,7};
    Node* head=convertArr2DLL(arr);
    cout<<"Before Reversing: ";
    printDLL(head);
    cout<<endl;
    Node* reversedDLL=reverseDLL(head);
    cout<<"After Reversing: ";
    printDLL(reversedDLL);
    cout<<endl;
    Node* reversedDLL2=reverseDLL2(reversedDLL);
    cout<<"After Reversing Again: ";
    printDLL(reversedDLL2);
    return 0;
}