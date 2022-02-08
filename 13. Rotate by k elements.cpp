#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[] , int start, int end){
    //reverse(arr.begin()+start, arr.begin()+end);
    while(start<end){
        int temp= arr[end];
        arr[end]=arr[start];
        arr[start]= temp;
        start++;
        end--;
    }
}
void rotate(int arr[], int n)
{
    int k=1;
    // int ans[n];
    // for( int i=0;i<n;i++){
    //     ans[(i+k)%n]=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     arr[i]=ans[i];
    // }
    int i=0,j=n-1;
    j=j-k;  // remember for clockwise , j starts from end
    reverse(arr, i,j);
    reverse(arr, j+1,n-1); //
    reverse(arr,0,n-1);
    
    
}

int main(){
int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n; i++){
    cin>>a[i];
  rotate(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
    cout<<endl;
  }
return 0;
  }