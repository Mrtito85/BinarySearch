#include <bits/stdc++.h>
using namespace std;
#define ll long long

  int floorElement(vector<int> &arr,int low,int high,int target){
  	int ans;

  	while(low<=high){
  		int mid=(low+high)/2;
  		//Finding greater element in an array <=target
  		if(arr[mid]<=target){
  			ans=arr[mid];
  			low=mid+1;
  		}
  		else{
  			high=mid-1;
  		}
  	}
  	return ans;
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

	cout<<floorElement(arr,0,arr.size()-1,target);


	return 0;
}