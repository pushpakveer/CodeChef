//Problem--STRING REVERSE
//Problem code- STR_REVERSE

//Problem:-Chef has a string S consisting only of English lowercase letters (a - z). However, Hitesh does not like it and wants it to be reversed.

// Hitesh wonders what is the minimum number of operations required to reverse the string S using the following operation:

// Select any i such that 1≤i≤|S| and remove Si from its original position and append it to the end of the string (i.e. shift any character to the end of the string).
// For e.g. if S= abcde and we apply operation on i=2, then S becomes acdeb.

// Help Hitesh find the minimum number of operations required to reverse S.

// It is guaranteed that it is possible to reverse the string in a finite number of operations.


// Solution:-->



#include<bits/stdc++.h>
using namespace std;
 int main(){

int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
  string r=s;
reverse(r.begin(),r.end());

  int count=0;
  int j=0;

  for(int i=0;i<s.size();i++){

    if(s[i]==r[j]){
      j++;
    } 
    else{
      count++;
    }


}
cout<<count<<endl;

}



return 0;


 }
