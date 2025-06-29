#include<iostream>
using namespace std;

int hashing[100000];

int main(){
    int n;
    cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    /* code */
}

for(int i=0;i<n;i++){
    hashing[arr[i]]+=1;
}

int q;
cin>>q;
while (q--)
{
    int x;
    cin>>x;
    cout<<hashing[x]<<endl;
    /* code */
}





return 0;

}