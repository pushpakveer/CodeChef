//PRBLM CODE:-SEGDIV

// //PRBLM-JJ challenges his friend GG to construct an array A containing N distinct elements such that the following conditions hold:
// For all 1≤i≤N, 1≤Ai≤105
// For every subarray of length ≥2, the sum of all the elements of the subarray is not divisible by the length of the subarray
// Please help perplexed GG to complete JJ's challenge.

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll odd=1;
    ll even=2;
    for(ll i=0;i<n;i++){
      if(i%2==0){
         v[i]=even;
         even+=2;
      }
      else{
         v[i]=odd;
         odd+=2;
      }

    }
    for(auto p:v){
      cout<<p<<" ";
    }
    cout<<endl;
    }
   return 0;}