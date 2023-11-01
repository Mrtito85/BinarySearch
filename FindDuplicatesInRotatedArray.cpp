#include <bits/stdc++.h>
 
using namespace std;

int searchInRotatedArrayDuplicates(vector<int> &arr,int low,int high,int k){
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==k)return mid;
		//here we are checking over array is sorted or not
		//Checking here if There are duplicate elements presents
		if(arr[low]==arr[mid] && arr[mid]==arr[high]){
			low++;
			high--;
			continue;

		}

		if(arr[low]<=arr[mid]){
			//Here checking if over array is present in left half
			if(arr[low]<=k && k<=arr[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}else{
			//Here checking over array in right half

			if(arr[mid]<=k && k<=arr[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}

		}
	}
	return -1;
}
 
int main() {


	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n,t;
	cin>>n>>t;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<searchInRotatedArrayDuplicates(arr,0,arr.size()-1,t);


    
    return 0;
}
