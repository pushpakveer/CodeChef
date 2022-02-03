// You are given a positive integer X which is at most 108.

// Find three distinct non-negative integers A,B,C that do not exceed 109 and satisfy the following equation:

// (A∣B)&(B∣C)&(C∣A)=X
// Here, ∣ denotes the bitwise OR operator and & denotes the bitwise AND operator.

// It can be shown that a solution always exists for inputs satisfying the given constraints. If there are multiple solutions, you may print any of them

//PRBLM CODE-ORANDCON

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
   ll X;
   cin>>X;
   int a=X;
   int b= X | (1<<28);
   int c=X | (1<<29);
   cout<<a<<" "<<b<<" "<<c<<" "<<endl;
   }
  
 
   return 0;}