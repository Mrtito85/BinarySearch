#include <bits/stdc++.h>
 
using namespace std;


int PowerOfN(int n){
	int low=1;
	int high=n-1;
	int ans=1;
	
	while(low<=high){
	    int mid=(low+high)/2;
	    if(mid*mid==n){
	    	ans=mid;
	    	return ans;
	    }
	    else if(mid*mid<n){
	    	ans=mid;
	    	low=mid+1;
	    }
	    else{
	    	high=mid-1;
	    }
	}
	return ans;
}
 
int main() {


	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	

	cout<<PowerOfN(n);


    
    return 0;
}
