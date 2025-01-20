// Recursion:When a function callls itself until a specific condition is met.
// Stack Space stores the completed function calls;
#include <iostream>

using namespace std;
int count=0;
void func(){
    if(count==3){
        return;
    }
    cout<<count<<endl;
    count++;
   func();
}
int main(){
    func();
    return 0;
}
