
//PRBLM CODE-B. Fortune Telling

#include<bits/stdc++.h>
#define ll  long long int 
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
   ll n,x,y;
   cin>>n>>x>>y;
   for(int i=0;i<n;i++ ){
    int j;
    cin>>j;
    x=x^j;
   }

   if((x&1)==(y&1)){
    cout<<"Alice"<<endl;
   }
   else{
    cout<<"Bob"<<endl;
   }
  
  }


  return 0;
}