
/// REMEMBER ALWAYS TRY TO USE LONG LONG INT EVEN IF IT IS NOT GIVEN AS PER CONSTRAINTS

PARALLEL PROCESSING


  
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

ll t;
cin>>t;

while(t--){
   ll n;
   cin>>n;
   ll a[n];
   ll total_sum=0;
   ll ans=0;
   ll pre_sum=0;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    total_sum+=a[i];
   }
   
    
   
    ans=total_sum;
   for(ll i=0;i<n;i++){
       pre_sum+=a[i];
       ll rem=total_sum-pre_sum;
       ll fact= max(pre_sum,rem);
       ans=min(fact,ans);

   }
   cout<<ans<<endl;



 
    


    

}


  return 0;
}