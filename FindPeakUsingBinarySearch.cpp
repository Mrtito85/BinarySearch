#include <bits/stdc++.h>
 
using namespace std;


int findPeakElement(vector<int> &arr,int low,int high){
	int n=high;
	if(n==1)return arr[0];
	if(arr[0]>arr[1])return arr[0];
	if(arr[n-1]>arr[n-2])return arr[n-1];

	low=1;
	high=n-2;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid -1])return mid;
		else if(arr[mid] >arr[mid+1]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;

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

	cout<<findPeakElement(arr,0,arr.size()-1);


    
    return 0;
}
