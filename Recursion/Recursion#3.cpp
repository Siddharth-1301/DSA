// /Parmaterised way of recursion

// #include<iostream>
// using namespace std;    

// void sumOfNo(int i,int sum){
//     if(i<1){
//         printf("%d",sum);
//         return;
//     }
//     sumOfNo(i-1,sum+i);
// }
// // f(3,0)=>3<1 false=>f(3-1=2,0+3=3)=>2<1 false=>f(2-1=1,3+2=5)=>1<1,false=>f(1-1=0,5+1=6)=>0<1 
// int main(){
//     int i=3;
//     sumOfNo(i,0);
//     return 0;

// }



// Functional way

// #include<iostream>
// using namespace std;   
// int f(int n){
//     if(n<1){
//     // printf("%d\n",n);

//         return 0;
//     }
//  return   n+f(n-1);
// } 
// int main(){
//     int n=3;
//     int result=f(n);
//     printf("%d",result);
//     return 0;
// } Time complexity is O(n) and space complexity is O(n)

 #include<iostream>
using namespace std; 
int fact(int n){
    if(n<1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    printf("%d",fact(4));
    return 0;
}