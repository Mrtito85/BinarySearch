#include <bits/stdc++.h>
 
using namespace std;

int minElementRotatedArray(vector<int> &arr,int low,int high){
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		// if low less than mid  we stored min from low to mid
		if(arr[low]<=arr[mid]){
			ans=min(arr[low],ans);
			low=mid+1;
		}
		else{
			//Here we store min for mid to high
			ans=min(arr[mid],ans);
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
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<minElementRotatedArray(arr,0,arr.size()-1);


    
    return 0;
}
