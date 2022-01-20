  Problem_NAME:Even Subset Xor

// Problem_statement:A number X is called bad if its binary representation contains odd number of 1 bits. For example, X=13=(1101)2 is bad while X=3=(11)2 is not bad.

// Chef calls an array A of length N special if the following conditions hold:

// For each 1≤i≤N, 0≤Ai<220
// All the elements of A are distinct
// There does not exist any non-empty subset of A such that the bitwise XOR of the subset is bad.
// For example,

// A=[2,3,4] is not special because the XOR of the subset [2,3] is 2⊕3=1, which is bad. (⊕ denotes the bitwise XOR operation)
// A=[3,3] is not special because its elements are not distinct.
// A=[3,5] is special because it satisfies all the conditions.
// Chef challenges you to construct any special array of length N. Can you complete Chef's challenge?



#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    vector<ll>a;
      for(ll i=0;i<1000;i++){
      if(__builtin_popcount(i)&1){
         continue;
      }
      else{
         a.push_back(i);
      }
   }
   int t;
   cin>>t;
   while(t--){
  

   ll n;
   cin>>n;
   for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
   }
   cout<<endl;
 
}

   return 0;}