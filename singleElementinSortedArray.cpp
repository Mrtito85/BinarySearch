#include <bits/stdc++.h>
 
using namespace std;

int singleElementSortedArray(vector<int> &arr){
    int n=arr.size();
    if(n==1)return arr[0];
    for(int i=0;i<n;i++){
        if(i==0){
        	
            if(arr[i]!=arr[i+1])return arr[i];
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1])return arr[i];
        }
        else {
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])return arr[i];
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

	cout<<singleElementSortedArray(arr);


    
    return 0;
}
