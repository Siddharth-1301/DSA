#include<iostream>
using namespace std;

void  swap(int *a,int *b ){
    int temp=*a;
    *a=*b;
    *b=temp;


}
void selection_sort(int *a, int n) {

    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
            swap(&a[i], &a[min]);
        }
    
}
int main(){
  int arr[]={13,39,12,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  selection_sort(arr, n);
cout<<" \n";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  } 
    return 0;
}