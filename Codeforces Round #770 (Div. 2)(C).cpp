
#include<bits/stdc++.h>
#define ll  long long int 
using namespace std;



int main(){

  int t;
  cin>>t;
  while(t--){
   ll n,k;
   cin>>n>>k;
   if(k==1){
    cout<<"Yes"<<endl;
    for(ll i=1;i<=n;i++){
      cout<<i<<endl;
    }

   }

   else{
      if(n%2==1 ){
    cout<<"No"<<endl;
   }
   else{
    cout<<"Yes"<<endl;
    for(ll i=1;i<=n;i++){
    cout<<i<<" ";
    for(ll j=1;j<=k-1;j++){
           cout<<i+(k*j)<<" ";         
    }

    cout<<endl;
 
   }
   }
   }


    

  
  }


  return 0;
}