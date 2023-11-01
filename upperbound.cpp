#include <bits/stdc++.h>
using namespace std;
#define ll long long

  int upperBound(vector<int> &arr,int low,int high,int target){
  	int ans;

  	while(low<=high){
  		int mid=(low+high)/2;
  		//Here is the Difference we only find bigger element than target
  		if(arr[mid]>target){
  			ans=mid;
  			high=mid-1;
  		}
  		else{
  			low=mid+1;
  		}
  	}
  }



signed main()
{

	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<upperBound(arr,0,arr.size()-1,target);


	return 0;
}