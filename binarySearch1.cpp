#include <bits/stdc++.h>
using namespace std;
#define ll long long

  int binarySearch(vector<int> &arr,int low,int high,int target){
  	if(low>high)return -1;
  	int mid=(low+high)/2;
  	if(target==arr[mid])return mid;
  	if(target>arr[mid]){
  		return binarySearch(arr,mid+1,high,target);
  	}else {
  		return binarySearch(arr,low,mid-1,target);
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

	cout<<binarySearch(arr,0,arr.size()-1,target);


	return 0;
}