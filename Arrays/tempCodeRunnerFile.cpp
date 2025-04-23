#include <iostream>
#include<vector>

using namespace std;
vector<int>replace(vector<int> &arr){
    // vector<int>result;
    if(arr.size()==1){
      arr[0]=-1;
      return arr;
    }
    for (int i = 0; i < arr.size()-1; i++)
    {
        int max=arr[i];
        for (int j = i+1; j<arr.size();j++)
        {
            /* code */
            if(arr[j]>max){
                max=arr[j];
            }

        }
        arr[i+1]=max;
        
        /* code */

    }
    arr[arr.size()-1]=-1;
    
return arr;
}
int main() {
    // Your code goes here
    vector<int> arr={17,18,5,4,6,1};
    
   vector<int> result= replace(arr);
   for (int i = 0; i < result.size(); i++)
   {
    /* code */
    cout<<result[i]<<" ";
   }
   
    return 0;
}