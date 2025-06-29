#include<iostream>
using namespace std;


int main(){
    char charr='a';
    printf("%d",charr);

    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;

    }

    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    
    return 0;
}