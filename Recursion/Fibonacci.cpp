#include<iostream>
using namespace std;
// Fibonacci Series using Recursion
// // Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
// // Fibonacci Series is a series in which each number is a sum of the preceding two numbers

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);


}
//It goes like 
// fibonacci (4)=fibonacci(3)+fibonacci(2)=>2+1=3
//fibonacci (3)=fibonacci(2)+fibonacci(1)=> 1+1=2
//fibonacci (2)=fibonacci(1)+fibonacci(0)=> 1+0=1
//fibonacci (1)=1
//fibonacci (0)=0<=1=>0
// Final sequence is 0,1,1,2,3

int main(){
    int n=4;
    cout<<"Fibonacci of "<<n<<" is "<<fibonacci(n)<<endl;
    for(int i=0;i<=n;i++){
        cout<<fibonacci(i)<<" ";

    }
    return 0;

}