// #include <iostream>
// using namespace std;

// void swap(int &left, int &right){
//     int temp = left;
//     left = right;
//     right = temp;
// }
// int reverse(int a[],int left,int right){
//    if (left >= right)
//     {
//         return 0;
//     }
//     swap(a[left], a[right]);
//  return   reverse(a, left + 1, right - 1);

// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         /* code */
//     }
    
//     // printf("%d",reverse(a,0,n-1));
//   reverse(a,0,n-1);
//   for (int i = 0; i < n; i++)
//   {
//     /* code */
//     printf("%d ",a[i]);
//   }
  
  
//     return 0;
// }


#include <iostream>
using namespace std;
 void swap(int &left, int &right){
    int temp = left;
    left = right;
    right = temp;
}
void f(int i,int a[],int n){
    if(i>=n/2){
        return;
    }

  swap(a[i],a[n-i-1]);

    f(i+1,a,n);
}
int main(){
    int a[5]={1,2,3,4,5};
    f(0,a,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}