#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void rotateArr(int arr[],int n,int d){
    for(int i=0;i<n-1;i++){
     swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// void rotateArr