#include<iostream>
#include<stack>
using namespace std;
struct ListNode{
public:
int data;
ListNode* next;
ListNode(int data,ListNode* next){
  this->data=data;
  this->next=next;
}
ListNode(int data){
    this->data=data;
    this->next=nullptr;
}

};

bool isPalindrome(ListNode* head){
stack<int> s;
if(head==nullptr || head->next==nullptr){
    return true;
}
ListNode* temp=head;
while(temp!=nullptr){
    s.push(temp->data);
    temp=temp->next;
}
temp=head;
while(temp!=nullptr){
    if(s.top()!=temp->data){
        return false;
    }
    s.pop();
    temp=temp->next;
    
}
return true;
}
int main(){
    ListNode* head=new ListNode(1);
    ListNode* temp=new ListNode(3,head);
    ListNode* temp1=new ListNode(2,temp);
    bool palindrome=isPalindrome(temp1);
    cout<<palindrome<<"\n";
    return 0;

}