#include <bits/stdc++.h>
using namespace std;
 void maxSubarraySum(int a[], int n){
        long long currsum=a[0],max=a[0];
   vector<pair<long long, int>> ans;
   
   ans.push_back(make_pair(a[0],0));
   int index=0,maxIndex=0;
      //  int ans[n];
        for(int i=1;i<n;i++){
            
                if(currsum>0){
                    currsum+=a[i];   
                }
                else{
                    currsum=a[i];
                    index = i;
                  }
          ans.push_back(make_pair(currsum,index)); //vector contains current sum and starting index
                    if(currsum>max){
                      max=currsum;  //maximum sum
                      maxIndex=i;  //maximum index
                      }
                
            }
   cout<<" maximumm subArray Sum is " <<max<<endl;
 cout<<"[CurrentSum,startIndex] : contents of ans vector "<<endl; 
for( int it =0;it<ans.size();it++){
  cout<<"["<<ans[it].first<<","<<ans[it].second<<"]"<<endl;
}
    cout<<" Maximum sub array is :"<<endl;
   for(int j= ans[maxIndex].second;j<=maxIndex;j++){
     cout<<a[j]<<" ";
   }
        cout<<endl;
       
      
    }

int main() {
   int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
 maxSubarraySum(a,n);
   
    
  }
    return 0;
}