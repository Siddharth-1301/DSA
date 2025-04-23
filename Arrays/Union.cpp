#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    vector<int>arr1={1,1,2,3,4,5,5};
    vector<int>arr2={1,2,3,4,5,6,7,8,9};
    set<int>s;
    for(int i=0;i<arr1.size();i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        s.insert(arr2[i]);
    }
    vector<int>temp;
    int j=0;
    for(auto it:s){
        temp.push_back(it);
    }
    for (auto it:temp)
    {
        cout<<it<<" ";
        /* code */
    }
    
    return 0;
}