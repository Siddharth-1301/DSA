// Print name N times using Recursion

#include<iostream>
using namespace std;
void printName(int n){
       if(n==0){
    return;
   }
   
   printName(n-1);
    cout<<"Sid"<<endl; //Backtracking
    // Backtracking is a technique used to find the solution of a problem by trying all possible solutions and then backtrack to find the best solution.
    // In this case, the function will call itself until the condition is met and then it will backtrack to print the name.
    //printName(5),printName(4),printName(3),printName(2),printName(1),printName(0) and then it will backtrack to print the name;

   
}
 int main() {
    int n;
    cin>>n;
   printName(n);
    return 0;
}