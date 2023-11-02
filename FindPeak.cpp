#include <bits/stdc++.h>
 
using namespace std;


int findPeakElement(vector<int> &arr){
	int n=arr.size();
	for(int i=0;i<n;i++){
		if((i==0 || arr[i-1]<arr[i]) && (i==n-1 || arr[i]>arr[i+1])){
			return i;
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

	cout<<findPeakElement(arr);


    
    return 0;
}
