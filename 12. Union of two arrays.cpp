#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> us;
        
        for(int i=0; i<n ;i++){
          cout<<" set current load factor "<<us.load_factor()<<endl;
            us.insert(a[i]);
            //us.insert(b[j]);
        }
  for(int i =0; i<m;i++){
    cout<<" set current load factor "<<us.load_factor()<<endl;
    us.insert(b[i]);
  }
        for(auto it : us){
          cout<< it <<" ";
          
        }
    cout<<" set bucket count "<<us.bucket_count()<<endl;
  cout<<" set max load factor "<<us.max_load_factor()<<endl;
   cout<<" set current load factor "<<us.load_factor()<<endl;
        return us.size();
    }
int main(){
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
int elements = doUnion(a,n,b,m);
  cout<<"\n NO of elements in union are "<<elements<<endl;
  
}