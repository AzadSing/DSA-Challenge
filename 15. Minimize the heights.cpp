#include <bits/stdc++.h>
using namespace std;
 int getMinDiff(int a[],int n,int k){

   int currmin=a[0], currmax=a[0],i=0;
if(n%2==0){
  if(a[0]>a[1]){
    currmax=a[0];
    currmin=a[1];
  }
  else{
    currmax= a[1];
    currmin= a[0];
  }
  i=2;
}
else{//array has odd no. of elements
  i=1;
}
   for(;i<n;i+=2){
     if(a[i]>a[i+1]){
       if(a[i]>currmax){currmax=a[i];}
    
       if(a[i+1]<currmin)currmin=a[i+1];
    
  }
  else{
    if(a[i+1]>currmax){currmax=a[i+1];}
    
       if(a[i]<currmin)currmin=a[i];
  }
   }
   //we have min and max elements
   cout<<"currmax and currmin are"<<currmax<<" "<<currmin<<endl;
if((currmax-currmin)>=k)
{
     currmin+=k;
     if((currmax-k)<0 ){
       currmax+=k;
     }
     else currmax-=k;
   }

   return currmax-currmin;
   
 }

int main() {
   int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
 int minHeight = getMinDiff(a,n,k);
    cout<<"Minimum Height Differece is "<<minHeight<<endl;
   
    
  }
    return 0;
}