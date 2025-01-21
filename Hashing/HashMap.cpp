#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin>>arr[i];

        /* code */
    }
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
     m[arr[i]]++;
        /* code */
    }
    

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<"Count of"<<m[x]<<endl;
        /* code */
    }
    return 0;
}