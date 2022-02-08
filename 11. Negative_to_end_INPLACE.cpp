
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	vector<int> v(n,0);
	for(int i =0;i<n; i++){
	    cin>>v[i];
	}
	int l=0,h=0;
	while(h<n){
	    if(v[h]>0){
	        h++;
	    }
	    else{
	        if(v[l]<0){
	            l++;
	        }
	        else
	        {
	            int temp = v[h];
	            v[h]= v[l];
	            v[l] = temp;
	            l++;
	            h++;
	        }
	        
	    }
	    
	}
	cout<<" The modified array is :";
	for(int i=0; i<n; i++){
	    cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}