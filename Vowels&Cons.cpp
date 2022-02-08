#include <bits/stdc++.h>
using namespace std;


int main() {
 string s;
 cin>>s;
 int n = s.size();
 string vow="",cons="",ans="";
 char currvow,currcons;
 int index,index2;

 for(int i=0;i< n; i++ ){
   if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'){
    
    vow.push_back(s[i]);
    currvow=s[i];
    index=i;
    if(s[i]<currvow){
      currvow=s[i];
      index=i;
    }

 }

 else{
   cons.push_back(s[i]);
   currcons=s[i];
    index2=i;
    if(s[i]<currcons){
      currcons=s[i];
      index2=i;
    }
 }

if(vow.size()>0){
  sort(vow.begin(),vow.end());
  ans+=vow;
  ans+=to_string(index);
}
else{
  ans+="NA-1";
}

if(cons.size()>0){
  sort(cons.begin(),cons.end());
  ans+=cons;
  ans+=to_string(index2);
}
else{
  ans+="NA-1";
}


}

cout<<ans;
return 0;
}