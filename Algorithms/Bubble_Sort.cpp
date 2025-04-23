#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    for (int i = n-1;i>=0; i--)
    {
        for (int j = 0; j<=i-1; j++)
        {
            if(a[j]>a[j+1]){
              int temp=a[j+1];
              a[j+1]=a[j];
              a[j]=temp;

            }
            /* code */
        }
        
        /* code */

    }
    
}
int main(){
    int arr[]={13,4,2,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    return 0;
}